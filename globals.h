#pragma once
#include <unordered_map>

class c_globals {
public:
	bool active = true;
	char config_name[255] = "";
};

inline c_globals globals;