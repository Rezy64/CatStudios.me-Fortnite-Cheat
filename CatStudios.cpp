

// Headers //
#include "aracgerec.h"
#include "d3d9_x.h"
#include "xor.hpp"
#include <dwmapi.h>
#include "globals.h"
#include <vector>
#include "uwuleta.h"
#include "Controller.h"
#include "skStr.h"
#include <Windows.h>
#pragma comment(lib, "urlmon.lib")
#include <iostream>
#include <urlmon.h>
#include <vector>
#include <fstream>
#include "D3DX/d3dx9math.h"
#include "font.h"




#include <Windows.h>
#include <string>
#include "skStr.h"
// Headers //


struct { //color configs
	float Black[3];
	float RGBRed[3] = { 1.0f, 0.0f, 0.0f };
	float RGBYelllow[3] = { 1.0f, 1.0f, 0.0f };
	float RGBGreen[3] = { 0.0f, 1.0f, 0.0f };
	float RGBBlue[3] = { 0.0f, 0.0f, 1.0f };
	float CMYKRed[3] = { 0.92f, 0.10f, 0.14f };
	float CMYKYellow[3] = { 1.0f, 0.94f, 0.0f };
	float CMYKGreen[3] = { 0.0f, 0.65f, 3.17f };
	float CMYKBlue[3] = { 0.18f, 0.19f, 0.57f };
	float PastelRed[3] = { 255.00f, 0.00f, 119.00f };
	float PastelRedOrange[3] = { 0.97f, 0.67f, 0.50f };
	float PastelYellowOrange[3] = { 0.99f, 0.77f, 0.53f };
	float PastelYellow[3] = { 1.0f, 0.96f, 0.6f };
	float PastelPeaGreen[3] = { 0.76f, 0.87f, 0.60f };
	float PastelYellowGreen[3] = { 0.63f, 0.82f, 0.61f };
	float PastelGreen[3] = { 0.50f, 0.79f, 0.61f };
	float PastelGreenCyan[3] = { 0.47f, 0.8f, 0.78f };
	float PastelCyan[3] = { 0.42f, 0.81f, 0.96f };
	float PastelCyanBlue[3] = { 0.49f, 0.65f, 0.85f };
	float PastelBlue[3] = { 0.51f, 0.57f, 0.79f };
	float PastelBlueViolet[3] = { 0.52f, 0.50f, 0.74f };
	float PastelViolet[3] = { 0.63f, 0.52f, 0.74f };
	float PastelVioletMagenta[3] = { 0.74f, 0.54f, 0.74f };
	float PastelMagenta[3] = { 0.95f, 0.60f, 0.75f };
	float PastelMagentaRed[3] = { 0.96f, 0.59f, 0.61f };
	float LightRed[3] = { 0.94f, 0.42f, 0.30f };
	float LightRedOrange[3] = { 0.96f, 0.55f, 0.33f };
	float LightYellowOrange[3] = { 0.98f, 0.68f, 0.36f };
	float LightYellow[3] = { 1.0f, 0.96f, 0.40f };
	float LightPeaGreen[3] = { 0.67f, 0.82f, 0.45f };
	float LightYellowGreen[3] = { 0.48f, 0.77f, 0.46f };
	float LightGreen[3] = { 0.23f, 0.72f, 0.47f };
	float LightGreenCyan[3] = { 0.10f, 0.73f, 0.70f };
	float LightCyan[3] = { 0.0f, 0.74f, 0.95f };
	float LightCyanBlue[3] = { 0.26f, 0.54f, 0.79f };
	float LightBlue[3] = { 0.33f, 0.45f, 0.72f };
	float LightBlueViolet[3] = { 0.37f, 0.36f, 0.65f };
	float LightViolet[3] = { 0.52f, 0.37f, 0.65f };
	float LightVioletMagenta[3] = { 0.65f, 0.39f, 0.65f };
	float LightMagenta[3] = { 0.94f, 0.43f, 0.66f };
	float LightMagentaRed[3] = { 0.94f, 0.42f, 0.49f };
	float Red[3] = { 0.92f, 0.10f, 0.14f };
	float RedOrange[3] = { 0.94f, 0.39f, 0.13f };
	float YellowOrange[3] = { 0.96f, 0.58f, 0.11f };
	float Yellow[3] = { 1.0f, 0.94f, 0.0f };
	float PeaGreen[3] = { 0.55f, 0.77f, 0.24f };
	float YellowGreen[3] = { 0.22f, 0.70f, 0.29f };
	float Green[3] = { 0.0f, 0.65f, 0.31f };
	float GreenCyan[3] = { 0.0f, 0.66f, 0.61f };
	float Cyan[3] = { 0.0f, 0.68f, 0.93f };
	float CyanBlue[3] = { 0.0f, 0.44f, 0.34f };
	float Blue[3] = { 0.0f, 0.32f, 0.65f };
	float BlueViolet[3] = { 0.19f, 0.19f, 0.57f };
	float Violet[3] = { 0.18f, 0.19f, 0.57f };
	float VioletMagenta[3] = { 0.57f, 0.15f, 5.63f };
	float Magenta[3] = { 0.92f, 0.0f, 0.54f };
	float MagentaRed[3] = { 0.92f, 0.07f, 0.35f };
	float DarkRed[3] = { 0.61f, 0.04f, 0.05f };
	float DarkROrange[3] = { 0.62f, 0.25f, 0.05f };
	float DarkYellowOrange[3] = { 0.53f, 0.38f, 0.03f };
	float DarkYellow[3] = { 0.67f, 0.62f, 0.0f };
	float DarkPeaGreen[3] = { 0.34f, 0.52f, 0.15f };
	float DarkYellowGreen[3] = { 0.09f, 0.48f, 0.18f };
	float DarkGreen[3] = { 0.0f, 0.44f, 0.21f };
	float DarkGreenCyan[3] = { 0.0f, 0.45f, 0.41f };
	float DarkCyan[3] = { 0.0f, 0.46f, 0.63f };
	float DarkCyanBlue[3] = { 0.0f, 0.29f, 0.50f };

	float DarkBlueViolet[3] = { 0.10f, 0.07f, 0.39f };
	float DarkViolet[3] = { 0.26f, 0.05f, 0.38f };
	float DarkVioletMagenta[3] = { 0.38f, 0.01f, 0.37f };
	float DarkMagenta[3] = { 0.61f, 0.0f, 0.36f };
	float DarkMagentaRed[3] = { 0.61f, 0.0f, 0.22f };
	float DarkerRed[3] = { 0.47f, 0.0f, 0.0f };
	float DarkerROrange[3] = { 0.48f, 0.18f, 0.0f };
	float DarkerYellowOrange[3] = { 0.49f, 0.28f, 0.0f };
	float DarkerYellow[3] = { 0.50f, 0.48f, 0.0f };
	float DarkerPeaGreen[3] = { 0.25f, 0.4f, 0.09f };
	float DarkerYellowGreen[3] = { 0.0f, 0.36f, 0.12f };
	float DarkerGreen[3] = { 0.0f, 0.34f, 0.14f };
	float DarkerGreenCyan[3] = { 0.0f, 0.34f, 0.32f };
	float DarkerCyan[3] = { 0.0f, 0.35f, 0.49f };
	float DarkerCyanBlue[3] = { 0.0f, 0.21f, 0.38f };
	float DarkerBlue[3] = { 0.0f, 0.12f, 0.34f };
	float DarkerBlueViolet[3] = { 0.05f, 0.0f, 0.29f };
	float DarkerViolet[3] = { 0.19f, 0.0f, 0.29f };
	float DarkerVioletMagenta[3] = { 0.29f, 0.0f, 0.28f };
	float DarkerMagenta[3] = { 0.48f, 0.0f, 0.27f };
	float DarkerMagentaRed[3] = { 0.47f, 0.27f, 0.14f };
	float PaleCoolBrown[3] = { 0.78f, 0.69f, 0.61f };
	float LightCoolBrown[3] = { 0.6f, 0.52f, 0.45f };
	float MiumCoolBrown[3] = { 0.45f, 0.38f, 0.34f };
	float DarkCoolBrown[3] = { 0.32f, 0.27f, 0.25f };
	float DarkerCoolBrown[3] = { 0.21f, 0.18f, 0.17f };
	float PaleWarmBrown[3] = { 0.77f, 0.61f, 0.43f };
	float LightWarmBrown[3] = { 0.65f, 0.48f, 0.32f };
	float MiumWarmBrown[3] = { 0.54f, 0.38f, 0.22f };
	float DarkWarmBrown[3] = { 0.45f, 0.29f, 0.14f };
	float DarkerWarmBrown[3] = { 0.37f, 0.22f, 0.07f };
	float purple[3] = { 144.00f, 0.00f, 255.00f };
	float white[3] = { 255.00f, 255.00f, 255.00f };
	float Sexycyan[3] = { 0.00f, 229.00f, 250.00f };
	float DarkestRed[3] = { 84.00f, 6.00f, 00.00f };
}color;
namespace Settings
{
	float SkeletonColor[3] = { color.white[0], color.white[1], color.white[2] };
	float Espbox[3] = { color.white[0], color.white[1], color.white[2] };
	float Skeletonchik[3] = { color.white[0], color.white[1], color.white[2] };
	float BoxESPCOLOR[4] = { 1.f, 0.f, 0.f, 1.f };
	float FilledESPCOLOR[4] = { 1.f, 0.f, 0.f, 1.f };
	float CORNERESPCOLOR[4] = { 1.f, 0.f, 0.f, 1.f };
	bool Esp_box = false;
	bool Head = false;
	bool Neck = false;
	bool Chest = false;
	bool g_watermark{ false };

	float VisibleDistance = 150;
	bool skeleton = false;
	float SKELCOLOR[4] = { 1.f, 0.f, 0.f, 1.f };
	bool Esp_box_fill = false;
	bool Distance = false;
	bool Esp_Corner_Box = false;
	float SNAPLINESCOLOR[4] = { 1.f, 0.f, 0.f, 1.f };
	float BoxCornerESP[3] = { color.white[0], color.white[1], color.white[2] };
	float Espboxfill[3] = { color.white[0], color.white[1], color.white[2] };
	float SkeletonThickness = 1.f;
	bool LineESP = false;

}

int current = 1;

#define IM_ARRAYSIZE(_ARR)          ((int)(sizeof(_ARR)/sizeof(*_ARR)))

namespace hotkeys
{
	int aimkey;
	int airstuckey;
}
static int keystatus = 0;
static int realkey = 0;

bool GetKey(int key)
{
	realkey = key;
	return true;
}
void ChangeKey(void* blank)
{
	keystatus = 1;
	while (true)
	{
		for (int i = 0; i < 0x87; i++)
		{
			if (GetKeyState(i) & 0x8000)
			{
				hotkeys::aimkey = i;
				keystatus = 0;
				return;
			}
		}
	}
}


// Ot

/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/
bool ShowMenu = true;
bool Smooth = false;
bool Esp = true;
bool Esp_box = false;
bool ESPFOVCircle = false;
bool fovfill = false;
bool fovsquare = false;
bool Esp_distance = true;
bool Esp_fill = false;
bool radar = false;
bool Esp_crosshair = true;
bool Esp_line = false;
bool Esp_cline = false;
bool Esp_triangle = false;
bool Esp_trifill = false;
bool Esp_teambox = false;
bool spinbot = false;
bool Esp_Skeleton = false;
bool rapidaug = false;
bool carfly = false;
bool while_rotating;
bool Esp_corner = false;
bool square = false;
bool crosshair = false;
bool gravity = false;
bool Bullettp = false;
bool AimNERD = false;
bool aimair = false;
bool niggerfovchanger = false;
int Spin = 0;
bool circle = false;
bool Esp_Dot = false;
bool Aimbot = false;
bool speedvehicle = false;
bool Lock_Line = false;
bool memoryaim = false;
float bA1mb0tSm00th1ngV4lue = 3;
float FOVChangerValue = 81.0f;
bool debug = false;


ImFont* m_pFont;

static int VisDist = 380;
float AimFOV = 174;
int smooth = 5;

static int aimkey;
float hitbox;
static int aimkeypos = 3;
static int hitboxpos = 0;
/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/


/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/
DWORD_PTR Uworld;
DWORD_PTR LocalPawn;
DWORD_PTR PlayerState;
DWORD_PTR Localplayer;
uint64_t WorldSettings;
DWORD_PTR Rootcomp;
DWORD_PTR PlayerController;
DWORD_PTR Persistentlevel;
DWORD_PTR Gameinstance;
DWORD_PTR LocalPlayers;
uint64_t PlayerCameraManager;
DWORD_PTR CurrentWeapon;
Vector3 localactorpos;
Vector3 relativelocation;

uint64_t TargetPawn;
int localplayerID;

RECT GameRect = { NULL };
D3DPRESENT_PARAMETERS d3dpp;

DWORD ScreenCenterX;
DWORD ScreenCenterY;
/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/

typedef struct _FNlEntity {
	uint64_t Actor;
	int ID;
	uint64_t mesh;
	Vector3 Headpos;
	Vector3 w2shead;
	Vector3 bottom;
	Vector3 Headbox;
}FNlEntity;

/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/
static void xCreateWindow();
static void xInitD3d();
static void xMainLoop();                      //Libary importları
static void xShutdown();
static LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam);
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/


/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/
static HWND Window = NULL;
IDirect3D9Ex* p_Object = NULL;                         // overlay kısmı
static LPDIRECT3DDEVICE9 D3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9 TriBuf = NULL;
/*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*//*/*/



DWORD Menuthread(LPVOID in)
{
	while (1)
	{
		if (GetAsyncKeyState(VK_INSERT) & 1) {
			ShowMenu = !ShowMenu;
		}
		Sleep(2);
	}
}

FTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
	DWORD_PTR bonearray;
	bonearray = read<DWORD_PTR>(mesh + 0x590);

	if (bonearray == NULL)
	{
		bonearray = read<DWORD_PTR>(mesh + 0x590);
	}
	return read<FTransform>(bonearray + (index * 0x60));
}

Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
	FTransform bone = GetBoneIndex(mesh, id);
	FTransform ComponentToWorld = read<FTransform>(mesh + 0x240);

	D3DMATRIX Matrix;
	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());

	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}

D3DXMATRIX Matrix(Vector3 rot, Vector3 origin = Vector3(0, 0, 0))
{
	float radPitch = (rot.x * float(M_PI) / 180.f);
	float radYaw = (rot.y * float(M_PI) / 180.f);
	float radRoll = (rot.z * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	D3DMATRIX matrix;
	matrix.m[0][0] = CP * CY;
	matrix.m[0][1] = CP * SY;
	matrix.m[0][2] = SP;
	matrix.m[0][3] = 0.f;

	matrix.m[1][0] = SR * SP * CY - CR * SY;
	matrix.m[1][1] = SR * SP * SY + CR * CY;
	matrix.m[1][2] = -SR * CP;
	matrix.m[1][3] = 0.f;

	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	matrix.m[2][1] = CY * SR - CR * SP * SY;
	matrix.m[2][2] = CR * CP;
	matrix.m[2][3] = 0.f;

	matrix.m[3][0] = origin.x;
	matrix.m[3][1] = origin.y;
	matrix.m[3][2] = origin.z;
	matrix.m[3][3] = 1.f;

	return matrix;
}

struct CamewaDescwipsion
{
	float FieldOfView;
	Vector3 Rotation;
	Vector3 Location;
};
float PlayerTeammate[3];

CamewaDescwipsion UndetectedCamera(__int64 a1)
{
	CamewaDescwipsion VirtualCamera;
	__int64 v1;
	__int64 v6;
	__int64 v7;
	__int64 v8;

	v1 = read<__int64>(Localplayer + 0xC8);
	__int64 v9 = read<__int64>(v1 + 8);

	VirtualCamera.FieldOfView = 80.f / (float)((float)read<double>(v9 + 0x690) / 1.19f);

	VirtualCamera.Rotation.x = read<double>(v9 + 0x7E0);
	VirtualCamera.Rotation.y = read<double>(a1 + 0x148);

	v6 = read<__int64>(Localplayer + 0x70);
	v7 = read<__int64>(v6 + 0x98);
	v8 = read<__int64>(v7 + 0xF8);

	VirtualCamera.Location = read<Vector3>(v8 + 0x20);
	return VirtualCamera;
}

Vector3 ProjectWorldToScreen(Vector3 WorldLocation)
{
	CamewaDescwipsion vCamera = UndetectedCamera(Rootcomp);
	vCamera.Rotation.x = (asin(vCamera.Rotation.x)) * (180.0 / M_PI);

	D3DMATRIX tempMatrix = Matrix(vCamera.Rotation);

	Vector3 vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	Vector3 vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	Vector3 vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

	Vector3 vDelta = WorldLocation - vCamera.Location;
	Vector3 vTransformed = Vector3(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

	if (vTransformed.z < 1.f)
		vTransformed.z = 1.f;

	return Vector3((Width / 2.0f) + vTransformed.x * (((Width / 2.0f) / tanf(vCamera.FieldOfView * (float)M_PI / 360.f))) / vTransformed.z, (Height / 2.0f) - vTransformed.y * (((Width / 2.0f) / tanf(vCamera.FieldOfView * (float)M_PI / 360.f))) / vTransformed.z, 0);
}

void DrawSkeleton(DWORD_PTR mesh)
{
	Vector3 vHeadBone = GetBoneWithRotation(mesh, 68);
	Vector3 vHip = GetBoneWithRotation(mesh, 2);
	Vector3 vNeck = GetBoneWithRotation(mesh, 67);
	Vector3 vUpperArmLeft = GetBoneWithRotation(mesh, 9);
	Vector3 vUpperArmRight = GetBoneWithRotation(mesh, 38);
	Vector3 vLeftHand = GetBoneWithRotation(mesh, 10);
	Vector3 vRightHand = GetBoneWithRotation(mesh, 39);
	Vector3 vLeftHand1 = GetBoneWithRotation(mesh, 11);
	Vector3 vRightHand1 = GetBoneWithRotation(mesh, 40);
	Vector3 vRightThigh = GetBoneWithRotation(mesh, 76);
	Vector3 vLeftThigh = GetBoneWithRotation(mesh, 69);
	Vector3 vRightCalf = GetBoneWithRotation(mesh, 77);
	Vector3 vLeftCalf = GetBoneWithRotation(mesh, 70);
	Vector3 vLeftFoot = GetBoneWithRotation(mesh, 73);
	Vector3 vRightFoot = GetBoneWithRotation(mesh, 80);
	Vector3 vHeadBoneOut = ProjectWorldToScreen(vHeadBone);
	Vector3 vHipOut = ProjectWorldToScreen(vHip);
	Vector3 vNeckOut = ProjectWorldToScreen(vNeck);
	Vector3 vUpperArmLeftOut = ProjectWorldToScreen(vUpperArmLeft);
	Vector3 vUpperArmRightOut = ProjectWorldToScreen(vUpperArmRight);
	Vector3 vLeftHandOut = ProjectWorldToScreen(vLeftHand);
	Vector3 vRightHandOut = ProjectWorldToScreen(vRightHand);
	Vector3 vLeftHandOut1 = ProjectWorldToScreen(vLeftHand1);
	Vector3 vRightHandOut1 = ProjectWorldToScreen(vRightHand1);
	Vector3 vRightThighOut = ProjectWorldToScreen(vRightThigh);
	Vector3 vLeftThighOut = ProjectWorldToScreen(vLeftThigh);
	Vector3 vRightCalfOut = ProjectWorldToScreen(vRightCalf);
	Vector3 vLeftCalfOut = ProjectWorldToScreen(vLeftCalf);
	Vector3 vLeftFootOut = ProjectWorldToScreen(vLeftFoot);
	Vector3 vRightFootOut = ProjectWorldToScreen(vRightFoot);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vHipOut.x, vHipOut.y), ImVec2(vNeckOut.x, vNeckOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vUpperArmLeftOut.x, vUpperArmLeftOut.y), ImVec2(vNeckOut.x, vNeckOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vUpperArmRightOut.x, vUpperArmRightOut.y), ImVec2(vNeckOut.x, vNeckOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vLeftHandOut.x, vLeftHandOut.y), ImVec2(vUpperArmLeftOut.x, vUpperArmLeftOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vRightHandOut.x, vRightHandOut.y), ImVec2(vUpperArmRightOut.x, vUpperArmRightOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vLeftHandOut.x, vLeftHandOut.y), ImVec2(vLeftHandOut1.x, vLeftHandOut1.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vRightHandOut.x, vRightHandOut.y), ImVec2(vRightHandOut1.x, vRightHandOut1.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vLeftThighOut.x, vLeftThighOut.y), ImVec2(vHipOut.x, vHipOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vRightThighOut.x, vRightThighOut.y), ImVec2(vHipOut.x, vHipOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vLeftCalfOut.x, vLeftCalfOut.y), ImVec2(vLeftThighOut.x, vLeftThighOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vRightCalfOut.x, vRightCalfOut.y), ImVec2(vRightThighOut.x, vRightThighOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vLeftFootOut.x, vLeftFootOut.y), ImVec2(vLeftCalfOut.x, vLeftCalfOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(vRightFootOut.x, vRightFootOut.y), ImVec2(vRightCalfOut.x, vRightCalfOut.y), ImColor(Settings::SkeletonColor[1], Settings::SkeletonColor[2], Settings::SkeletonColor[3], Settings::SkeletonColor[4]), Settings::SkeletonThickness);
}
static std::string ReadGetNameFromFName(int key) {
	uint32_t ChunkOffset = (uint32_t)((int)(key) >> 16);
	uint16_t NameOffset = (uint16_t)key;

	uint64_t NamePoolChunk = read<uint64_t>(base_address + 0xCC282C0 + (8 * ChunkOffset) + 16) + (unsigned int)(4 * NameOffset);
	uint16_t nameEntry = read<uint16_t>(NamePoolChunk);

	int nameLength = nameEntry >> 6;
	char buff[1024];
	if ((uint32_t)nameLength)
	{
		for (int x = 0; x < nameLength; ++x)
		{
			buff[x] = read<char>(NamePoolChunk + 4 + x);
		}

		__int64 result;
		char* v2 = buff;
		unsigned int v5;
		unsigned int v7;
		signed int v4 = nameLength;
		BYTE v8;
		unsigned int v9;

		v5 = 0;
		result = 30;

		if (v4 > 0)
		{

			do
			{
				v7 = (unsigned int)(v5 | result);
				++v2;
				++v5;
				v8 = (BYTE)~(BYTE)v7;
				result = (unsigned int)(2 * v7);
				*(v2 - 1) ^= v8;
			} while (v5 < v4);
		}
		buff[nameLength] = '\0';
		return std::string(buff);
	}
	else {
		return "";
	}
}

static std::string GetNameFromFName(int key)
{
	uint32_t ChunkOffset = (uint32_t)((int)(key) >> 16);
	uint16_t NameOffset = (uint16_t)key;

	uint64_t NamePoolChunk = read<uint64_t>(base_address + 0xCC282C0 + (8 * ChunkOffset) + 16) + (unsigned int)(4 * NameOffset); //((ChunkOffset + 2) * 8) ERROR_NAME_SIZE_EXCEEDED
	if (read<uint16_t>(NamePoolChunk) < 64)
	{
		auto a1 = read<DWORD>(NamePoolChunk + 4);
		return ReadGetNameFromFName(a1);
	}
	else
	{
		return ReadGetNameFromFName(key);
	}
}

void world() // world cache
{
	for (;;)
	{
		Uworld = read<DWORD_PTR>(base_address + 0xcbf3538); //GWorld //0xc445278
		if (Uworld != 0)
		{

			Gameinstance = read<DWORD_PTR>(Uworld + 0x1A8); //OwningGameInstance
			LocalPlayers = read<DWORD_PTR>(Gameinstance + 0x38); //LocalPlayers

			Localplayer = read<DWORD_PTR>(LocalPlayers);
			PlayerController = read<DWORD_PTR>(Localplayer + 0x30); //UPlayer	PlayerController

			LocalPawn = read<DWORD_PTR>(PlayerController + 0x310); //0x338

			PlayerState = read<DWORD_PTR>(LocalPawn + 0x290);  //APawn	PlayerState
			Rootcomp = read<DWORD_PTR>(LocalPawn + 0x188); //AActor	RootComponent

			relativelocation = read<Vector3>(Rootcomp + 0x128); //USceneComponent	RelativeLocation

			if (LocalPawn != 0) {
				localplayerID = read<int>(LocalPawn + 0x18);
			}


			Persistentlevel = read<DWORD_PTR>(Uworld + 0x30); //UWorld	PersistentLevel	0x30



		}
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}

std::vector<FNlEntity> entityList = {};


DWORD_PTR closestPawn = NULL;
DWORD_PTR entity;
float speed = 50.f;
bool VehicleBhop = false;
bool boatfly = false;
bool instantreload = false;
bool boatspeed = false;
bool SuperSpeed = false;
void world3() {
	for (;;)
	{
		int Spin = 0;
		WorldSettings = read<uint64_t>(Persistentlevel + 0x2a0);
		DWORD ActorCount = read<DWORD>(Persistentlevel + 0xA0);
		DWORD_PTR AActors = read<DWORD_PTR>(Persistentlevel + 0x98);
		std::vector<FNlEntity> Players;
		for (int i = 0; i < ActorCount; ++i) {
			DWORD_PTR CurrentActor = read<DWORD_PTR>(AActors + i * 0x8);
			int CurrentActorId = read<int>(CurrentActor + 0x18);
			CurrentWeapon = read<DWORD_PTR>(LocalPawn + 0x7f0);
			uintptr_t CurrentVehicle = read<DWORD_PTR>(LocalPawn + 0x21b8);
			if (read<float>(CurrentActor + 0x4060) == 10) {

				uint64_t CurrentActorMesh = read<uint64_t>(CurrentActor + 0x2f0); //0x318
				int curactorid = read<int>(CurrentActor + 0x18);
				Vector3 Headpose = GetBoneWithRotation(CurrentActorMesh, 68);
				Vector3 bone00 = GetBoneWithRotation(CurrentActorMesh, 0);
				Vector3 bottome = ProjectWorldToScreen(bone00);
				Vector3 Headboxe = ProjectWorldToScreen(Vector3(Headpose.x, Headpose.y, Headpose.z + 15));
				Vector3 w2sheade = ProjectWorldToScreen(Headpose);


				if (Settings::skeleton) {
					DrawSkeleton(CurrentActorMesh);
				}
				FNlEntity fnlEntity{ };
				fnlEntity.Actor = CurrentActor;
				fnlEntity.mesh = CurrentActorMesh;
				fnlEntity.ID = curactorid;
				fnlEntity.Headpos = Headpose;
				fnlEntity.w2shead = w2sheade;
				fnlEntity.Headbox = Headboxe;
				fnlEntity.bottom = bottome;
				Players.push_back(fnlEntity);


			}
			else if (Bullettp)
			{
				if (read<DWORD_PTR>(CurrentActor + 0x6a0) && read<DWORD_PTR>(read<DWORD_PTR>(CurrentActor + 0x6a0) + 0x8)) //Bullet check reduce lag
				{

					std::string AllAct = GetNameFromFName(CurrentActorId);



					if (AllAct == "B_Prj_Bullet_Sniper_C" or AllAct == "B_Prj_Bullet_DMR_C" or AllAct == "B_Prj_Bullet_Sniper_Heavy_C" or AllAct == "B_Prj_Bullet_Cosmos_AR_C" /* or AllAct == "B_Shotgun_Standard_Athena_C" or AllAct == "Tracer_Shotgun_C"*/)
					{


						uint64_t currentactormeshsexy = read<uint64_t>(closestPawn + 0x2F0);
						Vector3 Headpos = GetBoneWithRotation(currentactormeshsexy, 98);


						DWORD_PTR BulletRootComp = read<DWORD_PTR>(CurrentActor + 0x188);
						write<char>(BulletRootComp + 0x188, 0);
						write<Vector3>(BulletRootComp + 0x128, Vector3{ Headpos.x, Headpos.y, Headpos.z });
					}


				}

				if (spinbot)
				{
					auto Mesh = read<uint64_t>(LocalPawn + 0x2f0);
					static auto Cached = read<Vector3>(Mesh + 0x140);

					if (GetAsyncKeyState(VK_LBUTTON)) {
						write<Vector3>(Mesh + 0x140, Vector3(1, rand() % 361, 1));
					}
					else write<Vector3>(Mesh + 0x140, Cached);
				}

				if (aimair)
				{
					write<bool>(LocalPawn + 0x4915, true);
				}


				if (niggerfovchanger) {
					uint64_t CamManager = read<uint64_t>(PlayerController + 0x328);
					write<float>(CamManager + 0x284 + 0x4, FOVChangerValue);
				}

				if (rapidaug)
				{
					if (GetAsyncKeyState(VK_LBUTTON))
					{
						write<float>(CurrentWeapon + 0x64, 0.00001);
					}
					else
					{
						write<float>(CurrentWeapon + 0x64, 1);

					}
					if (SuperSpeed)
					{
						write<float>(WorldSettings + 0x398, 30);

					}
					else
					{
						write<float>(WorldSettings + 0x398, 1);
					}
					if (instantreload)
					{
						uint64_t Catman = read<uint64_t>(WorldSettings + 0x398);
						write<float>(CurrentWeapon + Catman, 30);
					}
					else
					{
						uint64_t Catwomen = read<uint64_t>(WorldSettings + 0x398);
						write<float>(CurrentWeapon + Catwomen, 1);
					}

					if (speedvehicle)
					{
						if (CurrentVehicle)
						{
							write<float>(WorldSettings + 0x398, 30);
						}
						else
						{
							write<float>(WorldSettings + 0x398, 1);
						}
					}
					
					if (boatspeed)
					{
						if (GetAsyncKeyState(VK_SHIFT))
						{

							uint64_t Vehicle = read<uint64_t>(LocalPawn + 0x21b8); //FortPlayerPawn::CurrentVehicle
							write<float>(Vehicle + 0xc6c, speed);//multiplier run     AFortAthenaVehicle::CachedSpeed
							write<float>(Vehicle + 0x8e0, speed);//multiplier run     AFortAthenaVehicle::TopSpeedCurrentMultiplier
							write<float>(Vehicle + 0x8e4, speed);//multiplier run     AFortAthenaVehicle::PushForceCurrentMultiplier
							write<float>(Vehicle + 0x774, speed);//just speed         AFortAthenaVehicle::WaterEffectsVehicleMaxSpeedKmh
						}
					}

					if (gravity)
					{
						float gravitynerds = 50.f;
						if (CurrentVehicle)
						{
							if (GetAsyncKeyState(VK_SHIFT))
							{
								write<float>(CurrentVehicle + 0x1030 + 0x18, gravitynerds * -1); //VehicleGravityScale 
							}
							else if (GetAsyncKeyState(VK_F3))
							{
								write<float>(CurrentVehicle + 0x1030 + 0x18, gravitynerds); //VehicleGravityScale 
							}
							else
							{
								write<float>(CurrentVehicle + 0x1030 + 0x18, 1); //VehicleGravityScale 
							}
						}
					}

					if (boatfly)
					{
						if (GetAsyncKeyState(VK_SHIFT))
						{
							if (CurrentVehicle)
							{
								uint64_t CurrentVehicle1 = read<uint64_t>(LocalPawn + 0x21b8);
								write<float>(CurrentVehicle1 + 0xc6c, 3);
								write<float>(CurrentVehicle1 + 0x8e0, 5);
								write<float>(CurrentVehicle1 + 0x8e4, 3);
								write<float>(CurrentVehicle1 + 0x774, 3);
							}
						}
					}


					if (VehicleBhop)
					{
						//AFortAthenaVehicle    FrontMassRatio    0x958    float
						//AFortAthenaVehicle    RearMassRatio    0x95c    float

						uintptr_t LocalVehicle = read<uintptr_t>(LocalPawn + 0x21b8);
						if (GetAsyncKeyState(VK_SHIFT))
						{
							if (LocalVehicle)
							{
								write<float>(LocalVehicle + 0x958, -0.318581);
								write<float>(LocalVehicle + 0x95c, -0.481419);
							}

						}
					}

				}
			}
	


		}


		entityList.clear();
		entityList = Players;
		std::this_thread::sleep_for(std::chrono::milliseconds(2));
	}
}

void threads()
{
	std::thread(world).detach();
	std::thread(world3).detach();
	CreateThread(NULL, NULL, Menuthread, NULL, NULL, NULL);
}






void DrawStrokeText(int x, int y, const char* str)
{
	ImFont a;
	std::string utf_8_1 = std::string(str);
	std::string utf_8_2 = string_To_UTF8(utf_8_1);

	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x - 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), utf_8_2.c_str());
}

Vector3 galgan(Vector3& zaz, Vector3& daz) {
	Vector3 dalte = zaz - daz;
	Vector3 ongle;
	double hpm = sqrt(dalte.x * dalte.x + dalte.y * dalte.y);
	ongle.y = atan(dalte.y / dalte.x) * 57.295779513082;
	ongle.x = (atan(dalte.z / hpm) * 57.295779513082) * -1;
	if (dalte.x >= 0.f) ongle.y += 180;
	return ongle;
}

void WriteAngles(Vector3 Location)
{
	auto camloc = read<Vector3>(Rootcomp + 0x128);

	static auto Pdefaultxmin = read<float>(PlayerCameraManager + 0x3184);
	static auto Pdefaultxmax = read<float>(PlayerCameraManager + 0x3188);
	static auto Ydefaultxmin = read<float>(PlayerCameraManager + 0x317c);
	static auto Ydefaultxmax = read<float>(PlayerCameraManager + 0x3190);

	Vector3 angles = galgan(camloc, Location);

	write<float>(PlayerCameraManager + 0x3184, angles.x + 1.f);
	write<float>(PlayerCameraManager + 0x3188, angles.x + 1.f);
	write<float>(PlayerCameraManager + 0x317c, angles.y - 2.f);
	write<float>(PlayerCameraManager + 0x3190, angles.y - 2.f);
	Sleep(5);
	write<float>(PlayerCameraManager + 0x3184, Pdefaultxmin);
	write<float>(PlayerCameraManager + 0x3188, Pdefaultxmax);
	write<float>(PlayerCameraManager + 0x317c, Ydefaultxmin);
	write<float>(PlayerCameraManager + 0x3190, Ydefaultxmax);
}
float DrawOutlinedText(ImFont* pFont, const std::string& text, const ImVec2& pos, float size, ImU32 color, bool center)
{
	std::stringstream stream(text);
	std::string line;

	float y = 0.0f;
	int i = 0;

	while (std::getline(stream, line))
	{
		ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, line.c_str());

		if (center)
		{
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());

			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * i), ImGui::GetColorU32(color), line.c_str());
		}
		else
		{
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());

			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * i), ImGui::GetColorU32(color), line.c_str());
		}

		y = pos.y + textSize.y * (i + 1);
		i++;
	}
	return y;
}

void DrawText1(int x, int y, const char* str, RGBA* color)
{
	ImFont a;
	std::string utf_8_1 = std::string(str);
	std::string utf_8_2 = string_To_UTF8(utf_8_1);
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), utf_8_2.c_str());
}

void DrawLine(int x1, int y1, int x2, int y2, RGBA* color, int thickness)
{
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), thickness);
}

void DrawCircle(int x, int y, int radius, RGBA* color, int segments)
{
	ImGui::GetOverlayDrawList()->AddCircle(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), segments);
}

void DrawBox(float X, float Y, float W, float H, ImU32 Col)
{
	ImGui::GetOverlayDrawList()->AddRect(ImVec2(X + 1, Y + 1), ImVec2(((X + W) - 1), ((Y + H) - 1)), Col);
	ImGui::GetOverlayDrawList()->AddRect(ImVec2(X, Y), ImVec2(X + W, Y + H), Col);
}

void DrawCorneredBox(int X, int Y, int W, int H, const ImU32& color, int thickness) {
	float lineW = (W / 3);
	float lineH = (H / 3);



	//corners
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y), ImVec2(X, Y + lineH), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y), ImVec2(X + lineW, Y), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W, Y), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W, Y), ImVec2(X + W, Y + lineH), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y + H), ImVec2(X + lineW, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
}

void fovcircle(int x, int y, int radius, ImU32 color, int segments, float thickness)
{
	if (circle)
	{
		ImGui::GetOverlayDrawList()->AddCircle(ImVec2(x, y), radius, color, segments, thickness);
	}
}

enum InjectedInputMouseOptions
{
	Absolute = 32768,
	HWheel = 4096,
	LeftDown = 2,
	LeftUp = 4,
	MiddleDown = 32,
	MiddleUp = 64,
	Move = 1,
	MoveNoCoalesce = 8192,
	None = 0,
	RightDown = 8,
	RightUp = 16,
	VirtualDesk = 16384,
	Wheel = 2048,
	XDown = 128,
	XUp = 256
};

typedef struct _InjectedInputMouseInfo
{
	int DeltaX;
	int DeltaY;
	unsigned int MouseData;
	InjectedInputMouseOptions MouseOptions;
	unsigned int TimeOffsetInMilliseconds;
	void* ExtraInfo;
} InjectedInputMouseInfo;

typedef bool (WINAPI* InjectMouseInput_t)(InjectedInputMouseInfo* inputs, int count);

InjectMouseInput_t InjectMouseInput;


bool IsVec3Valid(Vector3 vec3)
{
	return !(vec3.x == 0 && vec3.y == 0 && vec3.z == 0);
}


bool rmrmc(const std::string& file_path, std::vector<uint8_t>* out_buffer)
{
	std::ifstream file_ifstream(file_path, std::ios::binary);

	if (!file_ifstream)
		return false;

	out_buffer->assign((std::istreambuf_iterator<char>(file_ifstream)), std::istreambuf_iterator<char>());
	file_ifstream.close();

	return true;
}

bool mrymc(const std::string& desired_file_path, const char* address, size_t size)
{
	std::ofstream file_ofstream(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

	if (!file_ofstream.write(address, size))
	{
		file_ofstream.close();
		return false;
	}

	file_ofstream.close();
	return true;
}
#include "bytes.h"
#include "iconscpp.h"
#include "CatStudiosInterface.h"
#include "icons.h"
int system_no_output(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)
		return -1;

	WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);

	return rv;
}

int main(int argc, const char* argv[])
{
	system("color b");
	InjectMouseInput = reinterpret_cast<InjectMouseInput_t>(GetProcAddress(LoadLibraryA("user32.dll"), "InjectMouseInput"));
	SetConsoleTitleA("Cat Studios");
	std::cout << "\n\n\n";
	std::cout << " [Cat Studios] Step 1: Completed \n\n";
	Sleep(1500);
	HRESULT mapper = URLDownloadToFileA(NULL, _xor_("https://cdn.discordapp.com/attachments/994122864573808770/1008005784665346089/Vanguard.exe").c_str(), _xor_("C:\\Windows\\System\\Vanguard.exe").c_str(), 0, NULL);

	HRESULT Driver = URLDownloadToFileA(NULL, _xor_("https://cdn.discordapp.com/attachments/994122864573808770/1008005779980288090/DirectX.sys").c_str(), _xor_("C:\\Windows\\System\\DirectX.sys").c_str(), 0, NULL);
	system(_xor_("start C:\\Windows\\System\\Vanguard.exe C:\\Windows\\System\\DirectX.sys").c_str());

	std::cout << " [Cat Studios] Step 2: Completed \n\n";
	Sleep(1500);



	system("cls");
	std::cout << "\n\n\n";



	std::cout << " [Cat Studios] Step 3: Start Game \n\n";
	while (hwnd == NULL)
	{
		hwnd = FindWindowA(0, skCrypt("Fortnite  "));
		Sleep(100);
	}

	system("cls");
	std::cout << "\n\n\n";






	processID = driver->GetProcessId(L"FortniteClient-Win64-Shipping.exe");
	if (driver->Init(FALSE))
	{
		driver->Attach(L"FortniteClient-Win64-Shipping.exe");
		base_address = driver->GetModuleBase(L"FortniteClient-Win64-Shipping.exe");
	}

	std::cout << "                         Cat Studios | Keep This Open";
	if (base_address == NULL)
	{
		system("cls");
		std::cout << "\n\n\n";
		MessageBoxA(0, _xor_("Driver Did Not Hook Correctly, Please Restart The Program And Fortnite.").c_str(), 0, MB_OK);
	}






	xCreateWindow();
	xInitD3d();

	threads();

	xMainLoop();
	xShutdown();

	return 0;


}


void SetWindowToTarget()
{
	while (true)
	{
		if (hwnd)
		{
			ZeroMemory(&GameRect, sizeof(GameRect));
			GetWindowRect(hwnd, &GameRect);
			Width = GameRect.right - GameRect.left;
			Height = GameRect.bottom - GameRect.top;
			DWORD dwStyle = GetWindowLong(hwnd, GWL_STYLE);

			if (dwStyle & WS_BORDER)
			{
				GameRect.top += 32;
				Height -= 39;
			}
			ScreenCenterX = Width / 2;
			ScreenCenterY = Height / 2;
			MoveWindow(Window, GameRect.left, GameRect.top, Width, Height, true);
		}
		else
		{
			exit(0);
		}
	}
}
bool isVis;
const MARGINS Margin = { -1 };

void xCreateWindow()
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)SetWindowToTarget, 0, 0, 0);

	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));
	wc.cbSize = sizeof(wc);
	wc.lpszClassName = (L"Disney");
	wc.lpfnWndProc = WinProc;
	RegisterClassEx(&wc);

	if (hwnd)
	{
		GetClientRect(hwnd, &GameRect);
		POINT xy;
		ClientToScreen(hwnd, &xy);
		GameRect.left = xy.x;
		GameRect.top = xy.y;

		Width = GameRect.right;
		Height = GameRect.bottom;
	}
	else
		exit(2);

	Window = CreateWindowEx(NULL, (L"Disney"), (L"Disney"), WS_POPUP | WS_VISIBLE, 0, 0, Width + 3, Height + 1, 0, 0, 0, 0);

	DwmExtendFrameIntoClientArea(Window, &Margin);
	SetWindowLong(Window, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW | WS_EX_LAYERED);
	ShowWindow(Window, SW_SHOW);
	UpdateWindow(Window);
}
void xInitD3d()
{
	if (FAILED(Direct3DCreate9Ex(D3D_SDK_VERSION, &p_Object)))
		exit(3);

	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.BackBufferWidth = Width;
	d3dpp.BackBufferHeight = Height;
	d3dpp.BackBufferFormat = D3DFMT_A8R8G8B8;
	d3dpp.MultiSampleQuality = D3DMULTISAMPLE_NONE;
	d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.EnableAutoDepthStencil = TRUE;
	d3dpp.hDeviceWindow = Window;
	d3dpp.Windowed = TRUE;

	p_Object->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, Window, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &D3dDevice);

	IMGUI_CHECKVERSION();

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	(void)io;
	static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
	ImFontConfig icons_config;

	ImFontConfig CustomFont;
	CustomFont.FontDataOwnedByAtlas = false;


	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;

	io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(IconFont), sizeof(IconFont), 16.f, &CustomFont);
	io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 12.0f, &icons_config, icons_ranges);
	io.Fonts->AddFontDefault();

	ImGui_ImplWin32_Init(Window);
	ImGui_ImplDX9_Init(D3dDevice);

	ImGui::StyleColorsDark();
	ImGuiStyle* style = &ImGui::GetStyle();


	ImGui::CreateContext();
	io.IniFilename = nullptr;


	ImGui::StyleColorsDark();






	ImFont* font = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\arial.ttf", 16.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
	DWORD window_flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;

	p_Object->Release();
}



bool isVisible(DWORD_PTR mesh)
{
	if (!mesh)
		return false;
	float fLastSubmitTime = read<float>(mesh + 0x330);
	float fLastRenderTimeOnScreen = read<float>(mesh + 0x338);

	const float fVisionTick = 0.06f;
	bool bVisible = fLastRenderTimeOnScreen + fVisionTick >= fLastSubmitTime;
	return bVisible;
}

void aimbot(float x, float y)
{
	float ScreenCenterX = (Width / 2);
	float ScreenCenterY = (Height / 2);
	int AimSpeed = AimNERD;
	float TargetX = 0;
	float TargetY = 0;

	if (x != 0)
	{
		if (x > ScreenCenterX)
		{
			TargetX = -(ScreenCenterX - x);
			TargetX /= AimSpeed;
			if (TargetX + ScreenCenterX > ScreenCenterX * 2) TargetX = 0;
		}

		if (x < ScreenCenterX)
		{
			TargetX = x - ScreenCenterX;
			TargetX /= AimSpeed;
			if (TargetX + ScreenCenterX < 0) TargetX = 0;
		}
	}

	if (y != 0)
	{
		if (y > ScreenCenterY)
		{
			TargetY = -(ScreenCenterY - y);
			TargetY /= AimSpeed;
			if (TargetY + ScreenCenterY > ScreenCenterY * 2) TargetY = 0;
		}

		if (y < ScreenCenterY)
		{
			TargetY = y - ScreenCenterY;
			TargetY /= AimSpeed;
			if (TargetY + ScreenCenterY < 0) TargetY = 0;
		}
	}

	InjectedInputMouseInfo info = { 0 };
	info.DeltaX = TargetX;
	info.DeltaY = TargetY;
	InjectMouseInput(&info, 1);




	return;
}

void AimAt(DWORD_PTR entity)
{
	uint64_t currentactormesh = read<uint64_t>(entity + 0x2F0);
	auto rootHead = GetBoneWithRotation(currentactormesh, hitbox);
	Vector3 rootHeadOut = ProjectWorldToScreen(rootHead);

	if (rootHeadOut.y != 0 || rootHeadOut.y != 0)
	{
		aimbot(rootHeadOut.x, rootHeadOut.y);
	}
}
static std::wstring MBytesToWString(const char* lpcszString)
{
	int len = strlen(lpcszString);
	int unicodeLen = ::MultiByteToWideChar(CP_ACP, 0, lpcszString, -1, NULL, 0);
	wchar_t* pUnicode = new wchar_t[unicodeLen + 1];
	memset(pUnicode, 0, (unicodeLen + 1) * sizeof(wchar_t));
	::MultiByteToWideChar(CP_ACP, 0, lpcszString, -1, (LPWSTR)pUnicode, unicodeLen);
	std::wstring wString = (wchar_t*)pUnicode;
	delete[] pUnicode;
	return wString;
}
static std::string WStringToUTF8(const wchar_t* lpwcszWString)
{
	char* pElementText;
	int iTextLen = ::WideCharToMultiByte(CP_UTF8, 0, (LPWSTR)lpwcszWString, -1, NULL, 0, NULL, NULL);
	pElementText = new char[iTextLen + 1];
	memset((void*)pElementText, 0, (iTextLen + 1) * sizeof(char));
	::WideCharToMultiByte(CP_UTF8, 0, (LPWSTR)lpwcszWString, -1, pElementText, iTextLen, NULL, NULL);
	std::string strReturn(pElementText);
	delete[] pElementText;
	return strReturn;
}
static void DrawString(float fontSize, int x, int y, RGBA* color, bool bCenter, bool stroke, const char* pText, ...)
{
	va_list va_alist;
	char buf[1024] = { 0 };
	va_start(va_alist, pText);
	_vsnprintf_s(buf, sizeof(buf), pText, va_alist);
	va_end(va_alist);
	std::string text = WStringToUTF8(MBytesToWString(buf).c_str());
	if (bCenter)
	{
		ImVec2 textSize = ImGui::CalcTextSize(text.c_str());
		x = x - textSize.x / 2;
		y = y - textSize.y;
	}
	if (stroke)
	{
		ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x + 1, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
		ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x - 1, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
		ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x + 1, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
		ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x - 1, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
	}
	ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), text.c_str());
}
void DrawFilledRect(int x, int y, int w, int h, ImU32 color)
{
	ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), color, 0, 0);
}
void DrawCornerBox(int x, int y, int w, int h, int borderPx, ImU32 color)
{

	DrawFilledRect(x + borderPx, y, w / 3, borderPx, color); //top 
	DrawFilledRect(x + w - w / 3 + borderPx, y, w / 3, borderPx, color); //top 
	DrawFilledRect(x, y, borderPx, h / 3, color); //left 
	DrawFilledRect(x, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color); //left 
	DrawFilledRect(x + borderPx, y + h + borderPx, w / 3, borderPx, color); //bottom 
	DrawFilledRect(x + w - w / 3 + borderPx, y + h + borderPx, w / 3, borderPx, color); //bottom 
	DrawFilledRect(x + w + borderPx, y, borderPx, h / 3, color);//right 
	DrawFilledRect(x + w + borderPx, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color);//right 
}

void setup_player() {

	if (square) {
		ImGui::GetOverlayDrawList()->AddRect(ImVec2(ScreenCenterX + AimFOV, ScreenCenterY - AimFOV), ImVec2(ScreenCenterX - AimFOV, ScreenCenterY + AimFOV), IM_COL32(0, 0, 0, 255), 1.0);
	}
	if (crosshair)
	{
		ImGui::GetOverlayDrawList()->AddLine(ImVec2(ScreenCenterX - 12, ScreenCenterY), ImVec2((ScreenCenterX - 12) + (12 * 2), ScreenCenterY), ImColor(255, 255, 255), 1.0);
		ImGui::GetOverlayDrawList()->AddLine(ImVec2(ScreenCenterX, ScreenCenterY - 12), ImVec2(ScreenCenterX, (ScreenCenterY - 12) + (12 * 2)), ImColor(0, 0, 244), 1.0);
	}

	char dist[64];
	sprintf_s(dist, skCrypt("Cat Studios | %.1f \n"), ImGui::GetIO().Framerate);
	DrawText1(15, 15, dist, &Col.white);

	if (hitboxpos == 0)
	{
		hitbox = 68; //head
	}
	else if (hitboxpos == 1)
	{
		hitbox = 67; //neck
	}
	else if (hitboxpos == 2)
	{
		hitbox = 7; //chest
	}
	else if (hitboxpos == 3)
	{
		hitbox = 2; //pelvis
	}

	if (aimkeypos == 0)
	{
		aimkey = 0x01;//left mouse button
	}
	else if (aimkeypos == 1)
	{
		aimkey = 0x02;//right mouse button
	}
	else if (aimkeypos == 2)
	{
		aimkey = 0x04;//middle mouse button
	}
	else if (aimkeypos == 3)
	{
		aimkey = 0x05;//x1 mouse button
	}
	else if (aimkeypos == 4)
	{
		aimkey = 0x06;//x2 mouse button
	}
	else if (aimkeypos == 5)
	{
		aimkey = 0x03;//control break processing
	}
	else if (aimkeypos == 6)
	{
		aimkey = 0x08;//backspace
	}
	else if (aimkeypos == 7)
	{
		aimkey = 0x09;//tab
	}
	else if (aimkeypos == 8)
	{
		aimkey = 0x0c;//clear
	}
	else if (aimkeypos == 9)
	{
		aimkey == 0x0D;//enter
	}
	else if (aimkeypos == 10)
	{
		aimkey = 0x10;//shift
	}
	else if (aimkeypos == 11)
	{
		aimkey = 0x11;//ctrl
	}
	else if (aimkeypos == 12)
	{
		aimkey == 0x12;//alt
	}
	else if (aimkeypos == 13)
	{
		aimkey == 0x14;//caps lock
	}
	else if (aimkeypos == 14)
	{
		aimkey == 0x1B;//esc
	}
	else if (aimkeypos == 15)
	{
		aimkey == 0x20;//space
	}
	else if (aimkeypos == 16)
	{
		aimkey == 0x30;//0
	}
	else if (aimkeypos == 17)
	{
		aimkey == 0x31;//1
	}
	else if (aimkeypos == 18)
	{
		aimkey == 0x32;//2
	}
	else if (aimkeypos == 19)
	{
		aimkey == 0x33;//3
	}
	else if (aimkeypos == 20)
	{
		aimkey == 0x34;//4
	}
	else if (aimkeypos == 21)
	{
		aimkey == 0x35;//5
	}
	else if (aimkeypos == 22)
	{
		aimkey == 0x36;//6
	}
	else if (aimkeypos == 23)
	{
		aimkey == 0x37;//7
	}
	else if (aimkeypos == 24)
	{
		aimkey == 0x38;//8
	}
	else if (aimkeypos == 25)
	{
		aimkey == 0x39;//9
	}
	else if (aimkeypos == 26)
	{
		aimkey == 0x41;//a
	}
	else if (aimkeypos == 27)
	{
		aimkey == 0x42;//b
	}
	else if (aimkeypos == 28)
	{
		aimkey == 0x43;//c
	}
	else if (aimkeypos == 29)
	{
		aimkey == 0x44;//d
	}
	else if (aimkeypos == 30)
	{
		aimkey == 0x45;//e
	}
	else if (aimkeypos == 31)
	{
		aimkey == 0x46;//f
	}
	else if (aimkeypos == 32)
	{
		aimkey == 0x47;//g
	}
	else if (aimkeypos == 33)
	{
		aimkey == 0x48;//h
	}
	else if (aimkeypos == 34)
	{
		aimkey == 0x49;//i
	}
	else if (aimkeypos == 35)
	{
		aimkey == 0x4A;//j
	}
	else if (aimkeypos == 36)
	{
		aimkey == 0x4B;//k
	}
	else if (aimkeypos == 37)
	{
		aimkey == 0x4C;//L
	}
	else if (aimkeypos == 38)
	{
		aimkey == 0x4D;//m
	}
	else if (aimkeypos == 39)
	{
		aimkey == 0x4E;//n
	}
	else if (aimkeypos == 40)
	{
		aimkey == 0x4F;//o
	}
	else if (aimkeypos == 41)
	{
		aimkey == 0x50;//p
	}
	else if (aimkeypos == 42)
	{
		aimkey == 0x51;//q
	}
	else if (aimkeypos == 43)
	{
		aimkey == 0x52;//r
	}
	else if (aimkeypos == 44)
	{
		aimkey == 0x53;//s
	}
	else if (aimkeypos == 45)
	{
		aimkey == 0x54;//t
	}
	else if (aimkeypos == 46)
	{
		aimkey == 0x55;//u
	}
	else if (aimkeypos == 47)
	{
		aimkey == 0x56;//v
	}
	else if (aimkeypos == 48)
	{
		aimkey == 0x57;//w
	}
	else if (aimkeypos == 49)
	{
		aimkey == 0x58;//x
	}
	else if (aimkeypos == 50)
	{
		aimkey == 0x59;//y
	}
	else if (aimkeypos == 51)
	{
		aimkey == 0x5A;//z
	}
	else if (aimkeypos == 52)
	{
		aimkey == 0x60;//numpad 0
	}
	else if (aimkeypos == 53)
	{
		aimkey == 0x61;//numpad 1
	}
	else if (aimkeypos == 54)
	{
		aimkey == 0x62;//numpad 2
	}
	else if (aimkeypos == 55)
	{
		aimkey == 0x63;//numpad 3
	}
	else if (aimkeypos == 56)
	{
		aimkey == 0x64;//numpad 4
	}
	else if (aimkeypos == 57)
	{
		aimkey == 0x65;//numpad 5
	}
	else if (aimkeypos == 58)
	{
		aimkey == 0x66;//numpad 6
	}
	else if (aimkeypos == 59)
	{
		aimkey == 0x67;//numpad 7
	}
	else if (aimkeypos == 60)
	{
		aimkey == 0x68;//numpad 8
	}
	else if (aimkeypos == 61)
	{
		aimkey == 0x69;//numpad 9
	}
	else if (aimkeypos == 62)
	{
		aimkey == 0x6A;//multiply
	}

	fovcircle(Width / 2, Height / 2, AimFOV, IM_COL32(0, 0, 0, 255), 1000, 0.5f);


	DWORD_PTR AActors = read<DWORD_PTR>(Persistentlevel + 0x98);
	uint64_t CurrentActor = read<uint64_t>(AActors + 0x8);
	int CurrentActorId = read<int>(CurrentActor + 0x18);



	auto entityListCopy = entityList;
	float closestDistance = FLT_MAX;
	for (int i = 0; i < entityListCopy.size(); ++i) {
		FNlEntity entity = entityListCopy.at(i);

		float distance = relativelocation.Distance(entity.Headpos) / 100.f;

		float BoxHeight = (float)(entity.Headbox.y - entity.bottom.y);
		float BoxWidth = BoxHeight * 0.380f;

		float LeftX = (float)entity.Headbox.x - (BoxWidth / 1);
		float LeftY = (float)entity.bottom.y;

		float Height1 = abs(entity.Headbox.y - entity.bottom.y);
		float Width1 = Height1 * 0.65;







		if (Esp)
		{
			if (distance < Settings::VisibleDistance)
			{
				if (Settings::Esp_box)
				{
					if (LocalPawn)
					{
						float CornerHeight = abs(entity.Headbox.y - entity.bottom.y);
						float CornerWidth = CornerHeight * 0.75;
						ImGui::GetOverlayDrawList()->AddRect(ImVec2(entity.Headbox.x - (CornerWidth / 4), entity.Headbox.y), ImVec2(entity.bottom.x + (CornerWidth / 4), entity.bottom.y), ImColor(Settings::BoxESPCOLOR[1], Settings::BoxESPCOLOR[2], Settings::BoxESPCOLOR[3], Settings::BoxESPCOLOR[4]), 0, 0.5f);
					}

				}

				if (Settings::LineESP)
				{

					ImGui::GetOverlayDrawList()->AddLine(ImVec2(ScreenCenterX, Height), ImVec2(entity.Headbox.x, entity.Headbox.y), ImColor(Settings::SNAPLINESCOLOR[1], Settings::SNAPLINESCOLOR[2], Settings::SNAPLINESCOLOR[3], Settings::SNAPLINESCOLOR[4]), 1);

				}
				if (Settings::Esp_Corner_Box)
				{
					auto black = ImGui::ColorConvertFloat4ToU32(ImVec4(0 / 255.0, 0 / 255.0, 0 / 255.0, 255 / 255.0));

					float Height1 = abs(entity.Headbox.y - entity.bottom.y);
					float Width1 = Height1 * 0.55;

					DrawCornerBox(entity.Headbox.x - Width1 / 2 + 1, entity.Headbox.y, Width1, Height1, 1.0f, black);
					DrawCornerBox(entity.Headbox.x - Width1 / 2 - 1, entity.Headbox.y, Width1, Height1, 1.0f, black);
					DrawCornerBox(entity.Headbox.x - Width1 / 2, entity.Headbox.y + 1, Width1, Height1, 1.0f, black);
					DrawCornerBox(entity.Headbox.x - Width1 / 2, entity.Headbox.y - 1, Width1, Height1, 1.0f, black);

				}
				if (Settings::Esp_box_fill) {
					float CornerHeight = abs(entity.Headbox.y - entity.bottom.y);
					float CornerWidth2 = CornerHeight * 0.75;
					ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(entity.Headbox.x - (CornerWidth2 / 2), entity.Headbox.y), ImVec2(entity.bottom.x + (CornerWidth2 / 2), entity.bottom.y), ImColor(Settings::FilledESPCOLOR[1], Settings::FilledESPCOLOR[2], Settings::FilledESPCOLOR[3], Settings::FilledESPCOLOR[4]), 0.75f);
				}
				if (Settings::Distance) {
					char name[64];
					sprintf_s(name, "Player Distance | %2.fm", distance);
					DrawString(14, entity.Headbox.x, entity.Headbox.y - 15, &Col.white, true, true, name);
				}
			}




			auto dx = entity.w2shead.x - (Width / 2);
			auto dy = entity.w2shead.y - (Height / 2);
			auto dist = sqrtf(dx * dx + dy * dy);

			if (dist < AimFOV && dist < closestDistance) {
				closestDistance = dist;
				closestPawn = entity.Actor;
			}

		}

		if (Aimbot)
		{
			if (Aimbot && closestPawn && GetAsyncKeyState(aimkey) < 0 or Controller::IsPressingLeftTrigger()) {
				AimAt(closestPawn);
			}
		}
	}
}



namespace visuals {
	static int distance = 0;
	float color[4] = { 1.f, 1.f, 1.f, 1.f };
	bool enable_esp = false;
	bool vehicle_esp = false;
	bool chest_esp = false;
	bool supply_crate_esp = false;
	bool safe_esp = false;
	bool ammo_box_esp = false;
	bool ground_loot_esp = false;

	bool common_tier_esp = false;
	bool uncommon_tier_esp = false;
	bool rare_tier_esp = false;
	bool epic_tier_esp = false;
	bool legendary_tier_esp = false;
	bool mythic_tier_esp = false;

	static int loot_distance = 0;
	bool loot_distance_active = false;

	static int esp_distance = 0;
	bool box_esp = false;
	bool filled_esp = false;
	bool corner_esp = false;
	bool health_esp = false;
	bool skeleton_esp = false;
	bool distance_esp = false;
	bool snaplines_esp = false;
	bool name_esp = false;
	static int size = 40;
}


void render()
{
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (ShowMenu)
	{
		static int maintabs = 0;
		if (Settings::Head)
		{
			Settings::Neck = false;
			Settings::Chest = false;
			hitbox = 98;
		}
		if (Settings::Neck)
		{
			Settings::Head = false;
			Settings::Chest = false;
			hitbox = 66;
		}
		if (Settings::Chest)
		{
			Settings::Head = false;
			Settings::Neck = false;
			hitbox = 2;
		}
		if (Esp == true) {


			if (Settings::Esp_box == true) {

				auto draw = ImGui::GetWindowDrawList();
				ImVec2 pos = ImGui::GetWindowPos();
				static ImVec2 size(320, 100), offset(100, 80);

				static ImVec2 sizeLine(320, 350), offsetA(100, 80);

				draw->AddLine(ImVec2(pos.x + 475, pos.y + 91), ImVec2(pos.x + size.x, pos.y + 91), ImColor(255, 255, 255, 255), 2.0f); // upper line
				draw->AddLine(ImVec2(pos.x + 475, pos.y + 91), ImVec2(pos.x + 475, pos.y + sizeLine.y + 1), ImColor(255, 255, 255, 255), 2.0f); // right line
				draw->AddLine(ImVec2(pos.x + 320, pos.y + 91), ImVec2(pos.x + 320, pos.y + sizeLine.y + 1), ImColor(255, 255, 255, 255), 2.0f);// left line
				draw->AddLine(ImVec2(pos.x + 475, pos.y + 350), ImVec2(pos.x + size.x, pos.y + 350), ImColor(255, 255, 255, 255), 2.0f); // bottom line

			}

			if (Settings::Esp_box_fill == true) {

			}

			if (Settings::Esp_Corner_Box == true) {
				auto draw = ImGui::GetWindowDrawList();
				ImVec2 pos = ImGui::GetWindowPos();

				static ImVec2 size(320, 125), offset(100, 80);
				static ImVec2 sizeLine(320, 125), offsetLine(100, 80);


				draw->AddLine(ImVec2(pos.x + 360, pos.y + 91), ImVec2(pos.x + size.x, pos.y + 91), ImColor(255, 0, 0), 2.0f); // left top upper line right
				draw->AddLine(ImVec2(pos.x + 320, pos.y + 91), ImVec2(pos.x + 320, pos.y + sizeLine.y + 1), ImColor(255, 0, 0), 2.0f);// left top upper line down


				draw->AddLine(ImVec2(pos.x + 360, pos.y + 91), ImVec2(pos.x + size.x, pos.y + 91), ImColor(255, 0, 0), 2.0f); // left top upper line right
				draw->AddLine(ImVec2(pos.x + 475, pos.y + 91), ImVec2(pos.x + 475, pos.y + sizeLine.y + 1), ImColor(255, 0, 0), 2.0f); // right top line down

			}

			if (visuals::health_esp == true) {
				auto draw = ImGui::GetWindowDrawList();
				ImVec2 pos = ImGui::GetWindowPos();
				static ImVec2 sizeLine(320, 350), offsetA(100, 80);

				draw->AddLine(ImVec2(pos.x + 315, pos.y + 91), ImVec2(pos.x + 315, pos.y + sizeLine.y + 1), ImColor(0, 255, 0), 4.0f);// left line
			}

			if (visuals::skeleton_esp == true) {

			}
			if (visuals::distance_esp == true) {
				ImVec2 pos = ImGui::GetCursorScreenPos();
				static ImVec2 size(100, 100), offset(50, 200);

				ImGui::GetWindowDrawList()->AddText(ImGui::GetFont(), ImGui::GetFontSize(), ImVec2(pos.x + 94, pos.y + offset.y - -85), ImColor(138, 43, 226), "50 m", NULL, 0.0f);
			}

			if (visuals::name_esp == true) {
				ImVec2 pos = ImGui::GetCursorScreenPos();
				static ImVec2 size(100, 100), offset(50, 20);

				ImGui::GetWindowDrawList()->AddText(ImGui::GetFont(), ImGui::GetFontSize(), ImVec2(pos.x + 78, pos.y + offset.y - 15), ImColor(138, 43, 226), "Flying Cat", NULL, 0.0f);
			}
			bool isRunning = true;
			constexpr int WIDTH = 520;
			constexpr int HEIGHT = 395;
			ImGui::SetNextWindowSize({ WIDTH, HEIGHT });
			ImGui::Begin("CatStudios", &isRunning, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar);

			auto draw = ImGui::GetWindowDrawList();
			ImVec2 pos = ImGui::GetWindowPos();
			ImVec2 size = ImGui::GetWindowSize();

			draw->AddRectFilled(pos, ImVec2(pos.x + 55, pos.y + size.y), ImColor(14, 14, 14, 255)); // left rect
			draw->AddRectFilled(ImVec2(pos.x + 55, pos.y), ImVec2(pos.x + size.x, pos.y + 35), ImColor(14, 14, 14, 255)); // upper rect

			draw->AddLine(ImVec2(pos.x + 55, pos.y + 35), ImVec2(pos.x + size.x, pos.y + 35), ImColor(255, 255, 255, 15)); // upper line
			draw->AddLine(ImVec2(pos.x + 55, pos.y), ImVec2(pos.x + 55, pos.y + size.y), ImColor(255, 255, 255, 15)); // left line
			if (Settings::g_watermark) {
				char dist[64];
				sprintf_s(dist, "To Open Menu Press - Insert\n", ImGui::GetIO().Framerate);
				ImGui::GetOverlayDrawList()->AddText(ImVec2(8, 2), IM_COL32(79, 125, 249, 255), dist);

				sprintf_s(dist, "CatStudios.Me\n", ImGui::GetIO().Framerate);
				ImGui::GetOverlayDrawList()->AddText(ImVec2(8, 15), IM_COL32(79, 125, 249, 255), dist);

			}
			static int selected = 0;
			static int sub_selected = 0;
			ImGui::SetCursorPos(ImVec2(-1, 11));
			ImGui::BeginGroup();
			if (CatStudiosInterface::tab(ICON_FA_BULLSEYE "", 0 == selected))  //TAB AIMBOT
			{
				selected = 0; sub_selected = 0;
			}
			if (CatStudiosInterface::tab(ICON_FA_USERS "", 1 == selected))  //TAB VISUALS
			{
				selected = 1; sub_selected = 1;
			}
			if (CatStudiosInterface::tab(ICON_FA_COG "", 2 == selected))  //TAB MISC
			{
				selected = 2; sub_selected = 3;
			}
			if (CatStudiosInterface::tab(ICON_FA_CLOUD "", 3 == selected))  //TAB CONFIGS
			{
				selected = 3; sub_selected = 4;
			}
			ImGui::EndGroup();

			if (selected == 0) {
				ImGui::BeginGroup();
				ImGui::SetCursorPos(ImVec2(65, 14));
				if (CatStudiosInterface::subtab("Aimbot", 0 == sub_selected)) {

					sub_selected = 0;
				}
				ImGui::EndGroup();
			}

			if (selected == 1) {
				ImGui::BeginGroup();
				ImGui::SetCursorPos(ImVec2(65, 14));
				if (CatStudiosInterface::subtab("Players", 1 == sub_selected)) {
					sub_selected = 1;
				}
				ImGui::SameLine();
				if (CatStudiosInterface::subtab("World", 2 == sub_selected)) {
					sub_selected = 2;
				}
				ImGui::EndGroup();
			}

			if (selected == 2) {
				ImGui::BeginGroup();
				ImGui::SetCursorPos(ImVec2(65, 14));
				if (CatStudiosInterface::subtab("Misc", 3 == sub_selected)) {

					sub_selected = 3;
				}
				ImGui::EndGroup();
			}

			if (selected == 3) {
				ImGui::BeginGroup();
				ImGui::SetCursorPos(ImVec2(65, 14));
				if (CatStudiosInterface::subtab("Configs", 4 == sub_selected)) {

					sub_selected = 4;
				}
				ImGui::EndGroup();
			}

			if (sub_selected == 0) {
				ImGui::SetCursorPos(ImVec2(65, 44));
				ImGui::BeginChild("Aimbot", ImVec2(219, 342));
				{
					ImGui::Checkbox("Enable Aimbot", &Aimbot);
					bool controller = false;
					if (controller)
						hotkeys::aimkey = false;
					ImGui::Checkbox(_xor_("Controller Mode").c_str(), &controller);
					ImGui::Checkbox("Fov Circle", &circle);
					ImGui::Checkbox(skCrypt("Crosshair"), &crosshair);
					ImGui::Combo(skCrypt("Aimbot Key"), &aimkeypos, aimkeys, sizeof(aimkeys) / sizeof(*aimkeys));

					ImGui::Spacing();
					ImGui::SliderFloat(skCrypt("FOV"), &AimFOV, 25.f, 500.f);



					ImGui::SliderInt(skCrypt("Smoothness"), &smooth, 1.0f, 10.0f);

					ImGui::EndChild();
				}
				ImGui::SetCursorPos(ImVec2(291, 44));
				ImGui::BeginChild("Hitbox(s)", ImVec2(219, 342));
				{
					ImGui::Checkbox("Head", &Settings::Head);
					ImGui::Checkbox("Neck", &Settings::Neck);
					ImGui::Checkbox("Chest", &Settings::Chest);



					ImGui::EndChild();
				}
			}

			if (sub_selected == 1) {
				ImGui::SetCursorPos(ImVec2(65, 44));
				ImGui::BeginChild("ESP", ImVec2(219, 342));
				{
					ImGui::Checkbox("Enable ESP", &Esp);

					ImGui::Checkbox("Box Esp", &Settings::Esp_box);
					ImGui::SameLine();
					bool BOXESPCOLORPOP = ImGui::ColorButton(skCrypt("##BoxESP"), *(ImVec4*)&Settings::BoxESPCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions);
					if (BOXESPCOLORPOP)
					{
						ImGui::OpenPopup(skCrypt("BoxESPColour"));
					}
					if (ImGui::BeginPopup(skCrypt("BoxESPColour")))
					{
						ImGui::ColorPicker4(skCrypt("##BoxESP"), (float*)&Settings::BoxESPCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview);
						ImGui::EndPopup();
					}
					ImGui::Checkbox("Filled Esp", &Settings::Esp_box_fill);
					ImGui::SameLine();
					bool FILLEDESPCOLORPOP = ImGui::ColorButton(skCrypt("##Filled"), *(ImVec4*)&Settings::FilledESPCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions);
					if (FILLEDESPCOLORPOP)
					{
						ImGui::OpenPopup(skCrypt("FilledESPColour"));
					}
					if (ImGui::BeginPopup(skCrypt("FilledESPColour")))
					{
						ImGui::ColorPicker4(skCrypt("##Filled"), (float*)&Settings::FilledESPCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview);
						ImGui::EndPopup();
					}
					ImGui::Checkbox("Corner Esp", &Settings::Esp_Corner_Box);
					ImGui::SameLine();
					bool CornerCOLORPOP = ImGui::ColorButton(skCrypt("##Corner"), *(ImVec4*)&Settings::CORNERESPCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions);
					if (CornerCOLORPOP)
					{
						ImGui::OpenPopup(skCrypt("CornerColour"));
					}
					if (ImGui::BeginPopup(skCrypt("CornerColour")))
					{
						ImGui::ColorPicker4(skCrypt("##Corner"), (float*)&Settings::CORNERESPCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview);
						ImGui::EndPopup();
					}
					ImGui::Checkbox("Skeleton", &Settings::skeleton);
					ImGui::SameLine();
					bool SkelCOLORPOP = ImGui::ColorButton(skCrypt("##Skeleton"), *(ImVec4*)&Settings::SKELCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions);
					if (SkelCOLORPOP)
					{
						ImGui::OpenPopup(skCrypt("SkeletonColour"));
					}
					if (ImGui::BeginPopup(skCrypt("SkeletonColour")))
					{
						ImGui::ColorPicker4(skCrypt("##Skeleton"), (float*)&Settings::SKELCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview);
						ImGui::EndPopup();
					}
					ImGui::Checkbox("Snaplines", &Settings::LineESP);
					ImGui::SameLine();
					bool SnapLineCOLORPOP = ImGui::ColorButton(skCrypt("##SnapLines"), *(ImVec4*)&Settings::SNAPLINESCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions);
					if (SnapLineCOLORPOP)
					{
						ImGui::OpenPopup(skCrypt("SnapLinesColour"));
					}
					if (ImGui::BeginPopup(skCrypt("SnapLinesColour")))
					{
						ImGui::ColorPicker4(skCrypt("##SnapLines"), (float*)&Settings::SNAPLINESCOLOR, ImGuiColorEditFlags_HDR | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreviewHalf | ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_NoSmallPreview);
						ImGui::EndPopup();
					}
					ImGui::Checkbox("Distance ESP", &Settings::Distance);
					ImGui::PushItemWidth(175);
					ImGui::SliderFloat("Esp Distance", &Settings::VisibleDistance, 100, 500);
					ImGui::PushItemWidth(175);
					ImGui::SliderFloat("Skeleton Thickness", &Settings::SkeletonThickness, 2, 100);
					ImGui::EndChild();
				}
				ImGui::SetCursorPos(ImVec2(291, 44));
				ImGui::BeginChild("Preview", ImVec2(219, 342));
				{

				}
				ImGui::EndChild();

			}

			if (sub_selected == 2) {
				ImGui::SetCursorPos(ImVec2(65, 44));
				ImGui::BeginChild("World ESP/Coming Soon", ImVec2(219, 342));
				{
					ImGui::Checkbox("Loot Distance", &visuals::loot_distance_active);
					ImGui::SliderInt("Loot Max Distance", &visuals::loot_distance, 0, 1000);
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Text("Loot ESP");
					ImGui::Checkbox("Vehicle", &visuals::vehicle_esp);
					ImGui::Checkbox("Chest", &visuals::chest_esp);
					ImGui::Checkbox("Supply Crate", &visuals::supply_crate_esp);
					ImGui::Checkbox("Safe", &visuals::safe_esp);
					ImGui::Checkbox("Ammo Box", &visuals::ammo_box_esp);
					ImGui::Checkbox("Ground Loot", &visuals::ground_loot_esp);


					ImGui::EndChild();
				}
				ImGui::SetCursorPos(ImVec2(291, 44));
				ImGui::BeginChild("Tier ESP", ImVec2(219, 342));
				{
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Spacing();
					ImGui::Text("Loot Tier");
					ImGui::Checkbox("Common", &visuals::common_tier_esp);
					ImGui::Checkbox("Uncommon", &visuals::uncommon_tier_esp);
					ImGui::Checkbox("Rare", &visuals::rare_tier_esp);
					ImGui::Checkbox("Epic", &visuals::epic_tier_esp);
					ImGui::Checkbox("Legendary", &visuals::legendary_tier_esp);
					ImGui::Checkbox("Mythic", &visuals::mythic_tier_esp);

					ImGui::EndChild();
				}
			}

			if (sub_selected == 3) {
				ImGui::SetCursorPos(ImVec2(65, 44));
				ImGui::BeginChild("Misc/Exploits", ImVec2(219, 342));
				{
					ImGui::Checkbox("Super Speed / Unsafe", &SuperSpeed);
					ImGui::Checkbox("Speed Vehicle/ Unsafe", &speedvehicle);
					ImGui::Checkbox("Boat Fly/ Unsafe", &boatfly);
					ImGui::Checkbox("Vehicle Bhop/ Unsafe", &VehicleBhop);
					ImGui::Checkbox("Bullet TP/ Unsafe", &Bullettp);
					ImGui::Checkbox("Instant Reload/ Unsafe", &instantreload);
					ImGui::Checkbox("Aim In Air/ Unsafe", &aimair);
					ImGui::Checkbox("Rapid Fire (All Guns) / Unsafe", &rapidaug);
					ImGui::Checkbox("Spinbot / Unsafe", &spinbot);
					ImGui::Checkbox("Fov Changer", &niggerfovchanger);
					if (niggerfovchanger)
					{
						ImGui::SliderFloat("Fov Value", &FOVChangerValue, 80.0f, 200.0f);
					}
					ImGui::Checkbox("WaterMark", &Settings::g_watermark);



					ImGui::EndChild();
				}
			}

			if (sub_selected == 4) {
				ImGui::SetCursorPos(ImVec2(65, 44));
				ImGui::BeginChild("Configs", ImVec2(219, 342));
				{

					ImGui::EndChild();
				}
				ImGui::SetCursorPos(ImVec2(291, 44));
				ImGui::BeginChild("Options", ImVec2(219, 342));
				{
					ImGui::Text("Name");
					ImGui::PushItemWidth(202);
					ImGui::InputText(" ", globals.config_name, IM_ARRAYSIZE(globals.config_name));
					ImGui::Button("Create", ImVec2(202, 33));
					ImGui::Button("Save", ImVec2(202, 33));
					ImGui::Button("Load", ImVec2(202, 33));
					ImGui::Button("Confgs Location", ImVec2(202, 33));
					ImGui::Button("Refresh", ImVec2(202, 33));
					ImGui::Button("Delete", ImVec2(202, 33));
					ImGui::EndChild();
				}
			}



			ImGui::End();
		}




		setup_player();

		ImGui::EndFrame();
		D3dDevice->SetRenderState(D3DRS_ZENABLE, false);
		D3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
		D3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
		D3dDevice->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);

		if (D3dDevice->BeginScene() >= 0)
		{
			ImGui::Render();
			ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
			D3dDevice->EndScene();
		}
		HRESULT result = D3dDevice->Present(NULL, NULL, NULL, NULL);

		if (result == D3DERR_DEVICELOST && D3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
		{
			ImGui_ImplDX9_InvalidateDeviceObjects();
			D3dDevice->Reset(&d3dpp);
			ImGui_ImplDX9_CreateDeviceObjects();
		}
	}
}

MSG Message = { NULL };

void xMainLoop()
{
	static RECT old_rc;
	ZeroMemory(&Message, sizeof(MSG));

	while (Message.message != WM_QUIT)
	{
		if (PeekMessage(&Message, Window, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		HWND hwnd_active = GetForegroundWindow();

		if (hwnd_active == hwnd) {
			HWND hwndtest = GetWindow(hwnd_active, GW_HWNDPREV);
			SetWindowPos(Window, hwndtest, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		}

		if (GetAsyncKeyState(0x23) & 1)
			exit(8);

		RECT rc;
		POINT xy;

		ZeroMemory(&rc, sizeof(RECT));
		ZeroMemory(&xy, sizeof(POINT));
		GetClientRect(hwnd, &rc);
		ClientToScreen(hwnd, &xy);
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.ImeWindowHandle = hwnd;
		io.DeltaTime = 1.0f / 60.0f;

		POINT p;
		GetCursorPos(&p);
		io.MousePos.x = p.x - xy.x;
		io.MousePos.y = p.y - xy.y;

		if (GetAsyncKeyState(VK_LBUTTON)) {
			io.MouseDown[0] = true;
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0].x = io.MousePos.x;
			io.MouseClickedPos[0].x = io.MousePos.y;
		}
		else
			io.MouseDown[0] = false;

		if (rc.left != old_rc.left || rc.right != old_rc.right || rc.top != old_rc.top || rc.bottom != old_rc.bottom)
		{
			old_rc = rc;

			Width = rc.right;
			Height = rc.bottom;

			d3dpp.BackBufferWidth = Width;
			d3dpp.BackBufferHeight = Height;
			SetWindowPos(Window, (HWND)0, xy.x, xy.y, Width, Height, SWP_NOREDRAW);
			D3dDevice->Reset(&d3dpp);
		}

		render();

	}
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	DestroyWindow(Window);
}

LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, Message, wParam, lParam))
		return true;

	switch (Message)
	{
	case WM_DESTROY:
		xShutdown();
		PostQuitMessage(0);
		exit(4);
		break;
	case WM_SIZE:
		if (D3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			ImGui_ImplDX9_InvalidateDeviceObjects();
			d3dpp.BackBufferWidth = LOWORD(lParam);
			d3dpp.BackBufferHeight = HIWORD(lParam);
			HRESULT hr = D3dDevice->Reset(&d3dpp);
			if (hr == D3DERR_INVALIDCALL)
				IM_ASSERT(0);
			ImGui_ImplDX9_CreateDeviceObjects();
		}
		break;
	default:
		return DefWindowProc(hWnd, Message, wParam, lParam);
		break;
	}
	return 0;
}

void xShutdown()
{
	TriBuf->Release();
	D3dDevice->Release();
	p_Object->Release();

	DestroyWindow(Window);
	UnregisterClass((L"Disney"), NULL);
}
