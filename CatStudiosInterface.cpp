#include "CatStudiosInterface.h"


#pragma warning (disable : 4244)



struct tab_animations
{
    int hovered_animation;
    int active_animation;
};


bool CatStudiosInterface::tab(const char* label, bool selected)
{
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
    ImVec2 pos = window->DC.CursorPos;

    const ImRect rect(pos, ImVec2(pos.x + 50, pos.y + 50));
    ImGui::ItemSize(ImVec4(rect.Min.x, rect.Min.y, rect.Max.x, rect.Max.y + 5), style.FramePadding.y);
    if (!ImGui::ItemAdd(rect, id))
        return false;

    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(rect, id, &hovered, &held, NULL);

    static std::map <ImGuiID, tab_animations> anim;
    auto it_anim = anim.find(id);
    if (it_anim == anim.end())
    {
        anim.insert({ id, {0, 0} });
        it_anim = anim.find(id);
    }

    if (hovered)
        it_anim->second.hovered_animation += 8 * (1.f - ImGui::GetIO().DeltaTime);
    else
        it_anim->second.hovered_animation -= 8 * (1.f - ImGui::GetIO().DeltaTime);

    if (it_anim->second.hovered_animation > 50)
        it_anim->second.hovered_animation = 50;
    else if (it_anim->second.hovered_animation < 0)
        it_anim->second.hovered_animation = 0;

    if (selected)
        it_anim->second.active_animation += 16 * (1.f - ImGui::GetIO().DeltaTime);
    else
        it_anim->second.active_animation -= 16 * (1.f - ImGui::GetIO().DeltaTime);

    if (it_anim->second.active_animation > 155)
        it_anim->second.active_animation = 155;
    else if (it_anim->second.active_animation < 0)
        it_anim->second.active_animation = 0;

    window->DrawList->AddText(ImVec2(rect.Min.x + 25, rect.Min.y + 25), ImColor(255, 255, 255, 100 + it_anim->second.hovered_animation + it_anim->second.active_animation), label);

    return pressed;
}


struct subtab_animation
{
    int active_text_animation;
    int active_rect_alpha;
};


bool CatStudiosInterface::subtab(const char* label, bool selected)
{
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
    ImVec2 pos = window->DC.CursorPos;

    const ImRect rect(pos, ImVec2(pos.x + label_size.x, pos.y + 20));
    ImGui::ItemSize(ImVec4(rect.Min.x, rect.Min.y, rect.Max.x + 2.f, rect.Max.y), style.FramePadding.y);
    if (!ImGui::ItemAdd(rect, id))
        return false;

    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(rect, id, &hovered, &held, NULL);

    static std::map <ImGuiID, subtab_animation> anim;
    auto it_anim = anim.find(id);
    if (it_anim == anim.end())
    {
        anim.insert({ id, {0, 0} });
        it_anim = anim.find(id);
    }

    if (selected)
        it_anim->second.active_text_animation += 16 * (1.f - ImGui::GetIO().DeltaTime);
    else
        it_anim->second.active_text_animation -= 16 * (1.f - ImGui::GetIO().DeltaTime);

    if (it_anim->second.active_text_animation > 155)
        it_anim->second.active_text_animation = 155;
    else if (it_anim->second.active_text_animation < 0)
        it_anim->second.active_text_animation = 0;

    if (selected)
        it_anim->second.active_rect_alpha += 20 * (1.f - ImGui::GetIO().DeltaTime);
    else
        it_anim->second.active_rect_alpha -= 20 * (1.f - ImGui::GetIO().DeltaTime);

    if (it_anim->second.active_rect_alpha > 255)
        it_anim->second.active_rect_alpha = 255;
    else if (it_anim->second.active_rect_alpha < 0)
        it_anim->second.active_rect_alpha = 0;

    window->DrawList->AddRectFilled(ImVec2(rect.Min.x, rect.Min.y + 22), ImVec2(rect.Max.x, rect.Max.y), ImColor(138, 43, 226, it_anim->second.active_rect_alpha));
    window->DrawList->AddText(ImVec2((rect.Min.x + rect.Max.x) / 2.f - (label_size.x / 2.f), (rect.Min.y + rect.Max.y) / 2.f - (label_size.y / 2.f) - 5), ImColor(255, 255, 255, (100 + it_anim->second.active_text_animation)), label);

    return pressed;
}
