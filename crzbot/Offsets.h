#pragma once

#define TOFFSET(d1) d1
#define ENTITY_SIZE_DEF				0x42E0		    //biggest entity offset

#define OFFSET_ENTITYLIST		    0X18C62F8		//cl_entitylist  
#define OFFSET_LOCAL_PLAYER			0X1C75558 		//LocalPlayer 
#define OFFSET_MATRIX				0X1B3BD0		//ViewMatrix
#define OFFSET_TEAM					0X0450			//m_iTeamNum 
#define OFFSET_HEALTH				0x0440			//m_iHealth 
#define OFFSET_NAME					0X0589			//m_iName
#define OFFSET_VISIBLE_TIME         0x1A4C          //m_visibletime 

#define OFFSET_LIFE_STATE			0X0798			//m_lifeState  
#define OFFSET_BLEED_OUT_STATE		0X25F0			//m_bleedoutState 
#define OFFSET_BULLET_SPEED			0x1E50			//m_flProjectileSpeed
#define OFFSET_BULLET_GRAVITY		0x1E58			//m_flProjectileScale

#define OFFSET_CURRENT_WEAPON		0X19EC			//m_latestPrimaryWeapons			//DT_BaseCombatCharacter!0x19ec m_latestPrimaryWeapons
#define OFFSET_ORIGIN				0X014C			//m_vecAbsOrigin					//C_BaseEntity!0x014c m_vecAbsOrigin
#define OFFSET_BONES				0X0F38			//m_nForceBone + 0x50 - 0x8			//DT_RopeKeyframe!0x0f38 m_nForceBone
#define OFFSET_AIMPUNCH				0X2390			//m_vecPunchWeapon_Angle			//C_Player!0x2390 m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
#define OFFSET_CAMERAPOS			0X1E30			// Search CameraPos, first Result -
#define OFFSET_VIEWANGLES			0X2470			//m_ammoPoolCapacity - 0x14
#define OFFSET_BREATH_ANGLES		(OFFSET_VIEWANGLES - 0x10)
#define OFFSET_OBSERVER_MODE		0X32A4			//m_iObserverMode
#define OFFSET_OBSERVING_TARGET		0X32A8			//m_hObserverTarget

#define GLOW_CONTEXT 0x3C8 //Script_Highlight_SetCurrentContext
#define GLOW_LIFE_TIME 0x3A4 //Script_Highlight_SetLifeTime + 4
#define GLOW_DISTANCE 0x3B4 //Script_Highlight_SetFarFadeDist
#define GLOW_TYPE 0x2C4 //Script_Highlight_GetState + 4
#define GLOW_COLOR 0x1D0 //Script_CopyHighlightState 15th mov
#define GLOW_VISIBLE_TYPE 0x3D0 //Script_Highlight_SetVisibilityType 5th mov
#define GLOW_FADE 0x388 //Script_Highlight_GetCurrentInsideOpacity 3rd result of 3 offsets consecutive or first + 8