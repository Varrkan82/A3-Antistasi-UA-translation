//Game start
class first_load 		{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Завантажити попередню сесiю?"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "ТАК"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Завантажує попередню збережену сесiю";
			action = "closeDialog 0;nul = [true] execVM ""statSave\loadAccount.sqf"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Нi"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Стартує нова гра";
			//action = "closeDialog 0;if ((player == theBoss) and (isNil ""placementDone"") and !(isMultiplayer)) then {_nul = [] spawn A3A_fnc_placementselection};";
			action = "closeDialog 0;if ((player == theBoss) and (isNil ""placementDone"") and !(isMultiplayer)) then {closeDialog 0;[] execVM ""dialogs\difficultyMenu.sqf""};";
		};
	};
};

//FLAG
class HQ_menu 			{
	idd=100;
	movingenable=false;

	class controls {
		//Structure
		class HQ_box: BOX
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = "Налаштування Штабу (Командуючий)"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		//Buttons L and R
		class HQ_button_load: RscButton
		{
			idc = 104; 	//L1
			text = "Перевести собі 100€"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Переведiть 100€ з коштiв Фракцiй на свiй особистий рахунок. Увага! Це пошкодить ваш рейтинг серед фракцiї в кар'єрi командира";
			action = "if (isMultiPlayer) then {if (player == theBoss) then {nul=call A3A_fnc_theBossSteal} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""}} else {hint ""Ця функцiя тiльки для Мультiплеєра""};";
		};
		class HQ_button_savegame: RscButton
		{
			idc = 105; 	//L2
			text = "Управлiння Гарнiзонами"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає або прибирає бiйцiв з Гарнизонiв";
			action = "closeDialog 0;if (player == theBoss) then {nul=CreateDialog ""build_menu""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_moveHQ: RscButton
		{
			idc = 106;	//L3
			text = "Перенести Штаб"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "До вашої групи приєднається Мару. Арсенал повинен бути порожнiм. Для побудування виберiть у Мару дiю 'Побудувати'";
			action = "closeDialog 0;if (player == theBoss) then {nul = [] spawn A3A_fnc_moveHQ;} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_recruitUnit: RscButton
		{
			idc = 107;	//R1
			text = "Список учасникiв"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Вiдображає, хто з учасникiв сервера зараз знаходиться у грi";
			action = "if (player == theBoss) then {if (isMultiplayer) then {nul = [] call A3A_fnc_membersList} else {hint ""Тiльки в Мультiплеєрi""}} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_recruitSquad: RscButton
		{
			idc = 108;	//R2
			text = "Перебудова активів"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Cost: 5.000 €";
			action = "closeDialog 0;if (player == theBoss) then {nul=[] spawn A3A_fnc_rebuildAssets} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_vehicle: RscButton
		{
			idc = 109;	//R3
			text = "Тренування ботiв"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "closeDialog 0;if (player == theBoss) then {nul = [] call A3A_fnc_FIAskillAdd} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_skill: RscButton
		{
			idc = 110;	//M4
			text = "Гараж Фракцiї"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Дає доступ до гаражу Фракцiї";
			action = "closeDialog 0;nul = [false] spawn A3A_fnc_garage";
		};
	};
}; 										//slots: 6+1
class build_menu  			{
	idd=-1;
	movingenable=false;

	class controls {
		//Structure
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Налаштування Будiвнитства та Гарнiзонiв"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""HQ_menu"";";
		};
		//Action Buttons
		class 4slots_L1: RscButton
		{
			idc = -1;
			text = "Мiннi поля"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "iнженери розгортають або видаляють мiннi поля, використовуючи засоби, що наявнi в Арсеналi";
			action = "closeDialog 0;_nul = createDialog ""minebuild_menu"";";
		};
		class 4slots_R1: RscButton
		{
			idc = -1;
			text = "Побудувати пост"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Встановлює пункт спостереження або блокпост в залежностi вiд обраної мiсцевостi";
			action = "closeDialog 0; [""create""] spawn A3A_fnc_puestoDialog";
		};
		class 4slots_L2: RscButton
		{
			idc = -1;
			text = "Додати до Гарнiзону"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає бойовi одиницi до iснуючого Гарнiзону";
			action = "closeDialog 0; [""add""] spawn A3A_fnc_garrisonDialog";
		};
		class 4slots_R2: RscButton
		{
			idc = -1;
			text = "Прибрати Гарнiзон"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			//action = "closeDialog 0; [""delete""] spawn A3A_fnc_puestoDialog";
			tooltip = "Прибирає весь Гарнiзон або Пост";
			action = "closeDialog 0; [""rem""] spawn A3A_fnc_garrisonDialog";
		};
	};
}; 										//slots: 4
class garrison_recruit 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = "Налаштування Гарнизонiв"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""build_menu"";";
		};
		class HQ_button_rifleman: RscButton
		{
			idc = 104;
			text = "Найняти Новобранця"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMil] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_autorifleman: RscButton
		{
			idc = 105;
			text = "Найняти Автоматника"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMG] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_medic: RscButton
		{
			idc = 126;
			text = "Найняти Медика"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMedic] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_engineer: RscButton
		{
			idc = 107;
			text = "Найняти Командира"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKSL] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_explosive: RscButton
		{
			idc = 108;
			text = "Найняти Минометника"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [staticCrewBuenos] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_grenadier: RscButton
		{
			idc = 109;
			text = "Найняти Гренадера"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKGL] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_marksman: RscButton
		{
			idc = 110;
			text = "Найняти Снайпера"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKSniper] spawn A3A_fnc_garrisonAdd";
		};

		class HQ_button_AT: RscButton
		{
			idc = 111;
			text = "Найняти ПТ-бiця"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKATman] spawn A3A_fnc_garrisonAdd";
		};
	};
};										//slots: 8
class minebuild_menu 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Побудувати Мiнне поле"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""build_menu"";";
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = "Протипiхотнi Мiни"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[""APERSMine""] spawn A3A_fnc_mineDialog";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = "Прибрати Мiнне поле"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Spawn an AI Engineer which will clear any mine in it's surroundings";
			action = "closeDialog 0; [""delete""] spawn A3A_fnc_mineDialog;";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = "Протитанковi мiни"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [""ATMine""] spawn A3A_fnc_mineDialog";
		};
	};
};
class unit_recruit 		{
	idd= 100;
	movingenable=false;
	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = "Налаштування наймання"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_rifleman: RscButton
		{
			idc = 104;
			text = "Найняти Новобранця"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMil] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_autorifleman: RscButton
		{
			idc = 105;
			text = "Найняти Автоматника"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMG] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_medic: RscButton
		{
			idc = 126;
			text = "Найняти Медика"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMedic] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_engineer: RscButton
		{
			idc = 107;
			text = "Найняти iнженера"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKEng] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_explosive: RscButton
		{
			idc = 108;
			text = "Найняти Пiдривника"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKExp] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_grenadier: RscButton
		{
			idc = 109;
			text = "Найняти Гренадера"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKGL] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_marksman: RscButton
		{
			idc = 110;
			text = "Найняти Снайпера"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKSniper] spawn A3A_fnc_reinfPlayer";
		};

		class HQ_button_AT: RscButton
		{
			idc = 111;
			text = "Найняти ПТ-бiйця"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKATman] spawn A3A_fnc_reinfPlayer";
		};
	};
};
class vehicle_option 	{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Прибати Технiку"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Цивiльна технiка"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Цивiльна технiка дозволяє вам подорожувати в режимi «Пiд прикриттям», поки ви перебуваєте поблизу дорiг i не заїзжаєте на ворожi бази, форпости та блокпости";
			action = "closeDialog 0;nul=[] execVM ""Dialogs\buy_vehicle_civ.sqf"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Вiйськова технiка"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Широкий вибiр доступних автомобiлiв Фракцiї";
			action = "closeDialog 0; nul=[] execVM ""Dialogs\buy_vehicle.sqf"";";
		};
	};
};
class buy_vehicle 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = "Придбати Вiйськову технiку"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""vehicle_option"";";
		};
		class HQ_button_quad: RscButton
		{
			idc = 104;
			text = "Придбати Квадроцикл"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closedialog 0; nul = [vehSDKBike] spawn A3A_fnc_addFIAveh";
		};
		class HQ_button_offroad: RscButton
		{
			idc = 105;
			text = "Придбати Позашляховик"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKLightUnarmed] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_truck: RscButton
		{
			idc = 106;
			text = "Придбати Вантажiвку"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_Aoffroad: RscButton
		{
			idc = 107;
			text = "Придбати Озброєний Позашляховик"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKLightArmed] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_MG: RscButton
		{
			idc = 108;
			text = "Придбати стацiонарний Кулемет"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMGStatic] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_mortar: RscButton
		{
			idc = 109;
			text = "Придбати Мiномет"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMortar] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_AT: RscButton
		{
			idc = 110;
			text = "Придбати Протитанкову установку"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [staticATBuenos] spawn A3A_fnc_addFIAveh;";
		};

		class HQ_button_AA: RscButton
		{
			idc = 111;
			text = "Придбати установку ППО"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [staticAABuenos] spawn A3A_fnc_addFIAveh;";
		};
	};
};
class civ_vehicle 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Придбати Цивiльний транспорт"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""vehicle_option"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = "Позашляховик"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [civCar] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = "Вантажiвка"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [civTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_Gremove: RscButton
		{
			idc = 106;
			text = "Гелiкоптер"; //--- ToDo: Localize;
			//x = 0.37749 * safezoneW + safezoneX;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [civHeli] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_offroad: RscButton
		{
			idc = 107;
		 	text = "Човен"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
		 	action = "closeDialog 0;[civBoat] spawn A3A_fnc_addFIAveh;";
		 };
	};
};

//Map
class game_options 		{
		idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = "Налаштування гри"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = "Спавн Цивiльних"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Встановлює максимальну кiлькiсть цивiльних. Впливає на продуктивнiсть гри";
			action = "if (player == theBoss) then {closeDialog 0; nul = createDialog ""civ_config""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = "Вiдстань Спавну"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Впливає на продуктивнiсть, використовуйте з обережнiстю. Якщо вiдчуваєте, що Antistasi працює погано, встановiть меншi вiдстанi.";
			action = "if (player == theBoss) then {closeDialog 0; nul = createDialog ""spawn_config""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = "Кiлькiсть ботiв"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Встановлює, скiльки ботiв може з'явитися в локальнiй симуляцiї на картi. Впливає на продуктивнiсть системи та рiвень iнтелекту ботiв. Використовуйте з обережнiстю. Це не точна цифра, оскiльки завжди будуть спавнитися автомобiлi та лiдери пiдроздiлiв.";
			action = "if (player == theBoss) then {closeDialog 0; nul = createDialog ""fps_limiter""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = "Музика в грi"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Вмикає або прибирає ситуативну музику";
			action = "closedialog 0; if (musicON) then {musicON = false; hint ""Музику Вимкнена""} else {musicON = true; hint ""Музика Увiмкнена""}; nul = execVM ""musica.sqf"";";
		};
		/*
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};

		class 8slots_L4: RscButton
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};
		*/
		class 8slots_M4: RscButton
		{
			idc = -1;
			text = "Примусове збереження гри"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Дозволяє правильно зберегти найважливiшi данi гри на будь-якої версiї оновлення. Ванiльне збереження вимкнено через вiдсутнiсть декiлькох функцiй.";
			action = "closeDialog 0;if (player == theBoss) then {[""statSave\saveLoop.sqf"",""BIS_fnc_execVM""] call BIS_fnc_MP} else {_nul = [] execVM ""statSave\saveLoop.sqf""; hintC ""Personal Stats Saved""};";
		};
	};
};										//slots 6+1
class fps_limiter 			{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Кiлькiсть ботiв"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""game_options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "+10 ботiв"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (maxUnits < 200) then {maxUnits = maxUnits + 10; publicVariable ""maxUnits""; hint format [""AI Limit has been set at %1"",maxUnits]} else {hint ""AI Limit cannot be raised from 200""}} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "-10 ботiв"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (maxUnits > 80) then {maxUnits = maxUnits - 10; publicVariable ""maxUnits""; hint format [""AI Limit has been set at %1"",maxUnits]} else {hint ""AI Limit cannot be less than 80""}} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
	};
};
class spawn_config 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Вiдстань спавну"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""game_options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "+100 метрiв."; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (distanciaSPWN < 2000) then {distanciaSPWN = distanciaSPWN + 100; distanciaSPWN1 = distanciaSPwN * 1.3; distanciaSPWN2 = distanciaSPWN /2; publicVariable ""distanciaSPWN"";publicVariable ""distanciaSPWN1"";publicVariable ""distanciaSPWN2""}; hint format [""Дистанцiя спавну встановлена на %1 метрiв. Обережно, це може вплинути на гру!"",distanciaSPWN]} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "-100 метрів."; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (distanciaSPWN > 600) then {distanciaSPWN = distanciaSPWN - 100; if (distanciaSPWN < 600) then {distanciaSPWN = 600}; distanciaSPWN1 = distanciaSPwN * 1.3; distanciaSPWN2 = distanciaSPWN /2; if (distanciaSPWN < 600) then {distanciaSPWN = 600};publicVariable ""distanciaSPWN"";publicVariable ""distanciaSPWN1"";publicVariable ""distanciaSPWN2"";}; hint format [""Дистанцiя спавну %1 метрiв"",distanciaSPWN]} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
	};
};
class civ_config 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Присутнiсть цивiльних"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""game_options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "+1 макc цивiльних"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (civPerc < 150) then {civPerc = civPerc + 1; if (civPerc > 150) then {civPerc = 150}; publicVariable ""civPerc"";}; hint format [""Максимум цивiльних свстановлено на %1"",civPerc]} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "-1 макс цивiльних"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (civPerc > 0) then {civPerc = civPerc - 1; if (civPerc < 0) then {civPerc = 0};publicVariable ""civPerc"";}; hint format [""Максимум цивiльних свстановлено на %1"",civPerc]} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
	};
};

//Solomon Maru
class mission_menu 		{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Призначити мiсiю"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_AS: RscButton
		{
			idc = -1;
			text = "Вбивство"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if ((player == theBoss) or (not(isPlayer theBoss))) then {[[""AS""],""A3A_fnc_missionRequest""] call BIS_fnc_MP} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_CONV: RscButton
		{
			idc = -1;
			text = "Засiдка на Конвой"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if ((player == theBoss) or (not(isPlayer theBoss))) then {[[""CONVOY""],""A3A_fnc_missionRequest""] call BIS_fnc_MP} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_DES: RscButton
		{
			idc = -1;
			text = "Зніщення"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if ((player == theBoss) or (not(isPlayer theBoss))) then {[[""DES""],""A3A_fnc_missionRequest""] call BIS_fnc_MP} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_LOG: RscButton
		{
			idc = -1;
			text = "Логістика"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if ((player == theBoss) or (not(isPlayer theBoss))) then {[[""LOG""],""A3A_fnc_missionRequest""] call BIS_fnc_MP} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_RES: RscButton
		{
			idc = -1;
			text = "Рятувальна мiсiя"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if ((player == theBoss) or (not(isPlayer theBoss))) then {[[""RES""],""A3A_fnc_missionRequest""] call BIS_fnc_MP} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_vehicle: RscButton
		{
			idc = -1;
			text = "Завоювання"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if ((player == theBoss) or (not(isPlayer theBoss))) then {[[""CON""],""A3A_fnc_missionRequest""] call BIS_fnc_MP} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_exit: RscButton
		{
			idc = -1;
			text = "Вихiд"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;";
		};
	};
};


//Y menu
class radio_comm 		{
	idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = "Бойове меню"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = "Швидке перемiщення"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Телепортує вашу команду, або вибрану команду ботiв до дружньої зони, в залежностi вiд декiлькох факторiв";
			action = "closeDialog 0;nul = [] execVM ""fastTravelRadio.sqf"";";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = "Гравець та Грошi"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Подивіться на гравця та виконуйте необхідні маніпуляції";
			action = "closeDialog 0;if (isMultiPlayer) then {nul = createDialog ""player_money""} else {hint ""Тiльки в Мiльтiплеєрi""};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = "Пiд прикриття"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Станьте пiд прикриття, якщо ви вiдповiдаєте вимогам. Ворог не буде атакувати поки не виявить вас";
			action = "closeDialog 0;nul = [] spawn A3A_fnc_undercover";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = "Побудувати"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Побудуйте на обраному мiсцi будiвлю, направлену у цьому напрямку";
			action = "closeDialog 0;_nul = createDialog ""construction_menu"";";
		};
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = "Поставити в Гараж"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Поставити в Гараж технiку або стацiонарну зброю на яку ви дивитесь. Отримання назад - через взаємодiю з Прапором";
			action = "closeDialog 0;if (player != theBoss) then {nul = [false] call A3A_fnc_garageVehicle} else {if (isMultiplayer) then {_nul = createDialog ""garage_check""} else {nul = [true] call A3A_fnc_garageVehicle}};";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = "Вiдкрити технiку"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Дозволяє iншим групам використовувати цю технiку";
			action = "closeDialog 0;[] call A3A_fnc_unlockVehicle";
		};
		class 8slots_L4: RscButton
		{
			idc = -1;
			text = "Управлiння ботами"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Декiлька налаштувань та управлiння ботами";
			action = "if (player == leader group player) then {closeDialog 0;nul = createDialog ""AI_management""} else {hint ""Доступно лише керiвникам груп""};";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = "Командуючий"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Налаштування Командуючего";
			action = "closeDialog 0; nul = createDialog ""commander_comm"";";
		};
	};
}; 										// slots: 8
class vehicle_manager 		{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Управлiння технiкою"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Додати в Гараж або Продати технiку"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає до гаража або Продає технiку, на яку ви дивитесь";
			action = "closeDialog 0;nul = createDialog ""garage_sell"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Технiка у Пiдроздiлах"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Варiанти, пов'язанi з управлiнням технiкою у контрольованих пiдроздiлах";
			action = "closeDialog 0; if (player == theBoss) then {nul = createDialog ""squad_manager""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Додати до Авiапiдтримки"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Отримати бали Авiаудару додавши цей транспортний засiб до авiарсеналу Фракцiї";
			action = "closeDialog 0;nul = [] call A3A_fnc_addBombRun";
		};
		class HQ_button_unlock: RscButton
		{
			idc = -1;
			text = "Вiдкрити технiку"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Дозволяє iншим групам використовувати цю технiку";
			action = "closeDialog 0;[] call A3A_fnc_unlockVehicle";
		};
	};
};
class veh_query 				{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = "Додати технiку до Пiдроздiлу?"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;vehQuery = nil; if (player == theBoss) then {nul= [] execVM ""Dialogs\squad_recruit.sqf""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = "ТАК"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; vehQuery = true";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = "НІ"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; vehQuery = nil";
		};
	};
};
class squad_manager 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Опції підрозділа"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = "Техніка підрозділа"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Подивіться на техніку і призначте її до вибраного підрозділу";
			action = "closeDialog 0;[] call A3A_fnc_addSquadVeh;";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = "Ситуація підрозділу"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Якщо вибраний підрозділ використовує техніку, дізнайтеся про їх статус";
			action = "[""stats""] call A3A_fnc_vehStats;";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = "Зайняти/Висадити"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Змушити підрозділ зайняти призначену техніку або вийти з неї";
			action = "[""mount""] call A3A_fnc_vehStats";
		};
		class HQ_button_AA: RscButton
		{
			idc = -1;
			text = "Автоприціл стаціонарів"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Скористайтеся цією опцією на підрозділах ПТ та ППО. Водій намагатиметься повернутися задом до будь-якого виявленого ворога";
			action = "closeDialog 0; [] spawn A3A_fnc_staticAutoT";
		};
	};
};
class AI_management 		{
	idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = "Бойове меню"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0;nul = createDialog ""radio_comm"";";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = "Управляти ботами"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Візьміть під контроль обраного бота або командира підрозділу, ви зможете виконувати будь-які дії протягом 60 секунд. Управління завершується, якщо гравець або контрольований отримує будь-яке порання";
		action = "closeDialog 0; if ((count groupselectedUnits player > 0) and (count hcSelected player > 0)) exitWith {hint ""Ви повинні вибирати з меню Бази або Підрозділу, але не обох""}; if (count groupselectedUnits player == 1) then {nul = [groupselectedUnits player] execVM ""REINF\controlunit.sqf""}; if (count hcSelected player == 1) then {nul = [hcSelected player] execVM ""REINF\controlHCsquad.sqf"";};";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = "Пошук спорядження"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Боти будуть шукати кращу зброю, жилети, шоломи і т.д. Якщо боти знаходяться в техніці, все знайдене буде складено туди. Якщо ні, то боти будутиь одягати спорядження";
			action = "closeDialog 0; if (count groupselectedUnits player == 0) then {nul = (units group player) spawn A3A_fnc_rearmCall} else {nul = (groupselectedUnits player) spawn A3A_fnc_rearmCall};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = "Автолікування"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Члени підрозділу будуть намагатися лікувати один одного.";
			action = "if (autoHeal) then {autoHeal = false; hint ""Auto Healing disabled"";} else {autoHeal = true; hint ""Auto Heal enabled""; nul = [] spawn A3A_fnc_autoHealFnc}";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = "Рапорт підрозділу"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Відновити інформацію про стан підрозділу";
			action = "[""stats""] call A3A_fnc_vehStats;";
		};
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = "Garrison Units / Squads"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає вибраних ботів або підрозділ гарнізону який обрано на карті";
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\addToGarrison.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\addToGarrison.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {hint ""Не вибрано жодних ботів або підрозділів""}";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = "Додати підрозділу техніку"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає техніку, на яку ви дивитесь, вибраному підрозділу";
			action = "closeDialog 0;[] call A3A_fnc_addSquadVeh;";
		};
		class 8slots_L4: RscButton
		{
			idc = -1;
			text = "Звільнити бота/підрозділ"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Звільнити вибраного бота або підрозділ, відшкодуючи їх вартість";
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\dismissPlayerGroup.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\dismissSquad.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {hint ""Не вибрано жодних ботів або підрозділів""}";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = "Зайняти/Висадити"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Змушити підрозділ зайняти призначену техніку або вийти з неї";
			action = "[""mount""] call A3A_fnc_vehStats";
		};
	};
};
class commander_comm 		{
	idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = "Бойове меню Командуючего"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0;nul = createDialog ""radio_comm"";";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = "Найняти підрозділ"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Набирайте нові підрозділи і керуйте ними за допомогою бойового меню (CTRL + SPACE)";
			action = "closeDialog 0;if (player == theBoss) then {nul= [] execVM ""Dialogs\squad_recruit.sqf""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = "Авіапідтримка"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Запросити Авіапідтримку (використовує очки Авіаудару)";
			action = "closeDialog 0;if (player == theBoss) then {_nul = createDialog ""carpet_bombing""} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = "Аванпост/Блокпост"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Створює новий Спостережний Аванпост або Блокпост, в залежності від обраної місцевості";
			action = "if (player == theBoss) then {closeDialog 0;[""create""] spawn A3A_fnc_puestoDialog} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = "Прибрати сміття"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Видаляє такі речі, як скинуту зброю, магазини, одяг, тощо. Обережно, це підтормажує гру на деякий час";
			action = "if (player == theBoss) then {closedialog 0;[] remoteExec [""A3A_fnc_garbageCleaner"",2]} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = "Прибрати Аванпост/Блокпост"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Прибирає вибраний аванпост або блокпост, гроші будуть відшкодовані";
			action = "if (player == theBoss) then {closeDialog 0; [""delete""] spawn A3A_fnc_puestoDialog} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = "Гараж Фракції"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Дозволяє поставити обрану техніку в гараж Фракції (загальний для Командуючих)";
			action = "if (player == theBoss) then {closeDialog 0;nul = [true] call A3A_fnc_garageVehicle;} else {hint ""Доступ до цiєї функцiї має тiльки Командуючий""};";
		};
		class 8slots_L4: RscButton
		{
			idc = -1;
			text = "Подати у відставку"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Подати у відставку або передати командування";
			action = "if (isMultiplayer) then {closedialog 0;execVM ""orgPlayers\commResign.sqf""} else {hint ""Тільки в Мультіплеєрі""};";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = "Продати техніку"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Продати обрану техніку";
			action = "if (player == theBoss) then {closeDialog 0; nul = [] call A3A_fnc_sellVehicle} else {hint ""Тільки Командуючий може продавати техніку""};";
		};
	};
};
class carpet_bombing 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Килимове бомбардування"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Фугасні бомби"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Ціна: 1 пункт";
			action = "closeDialog 0;[""HE""] spawn A3A_fnc_NATObomb;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Килимове бомбардування"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Ціна: 1 пункт";
			action = "closeDialog 0;[""CARPET""] spawn A3A_fnc_NATObomb;";
		};
		class 4slots_L2: RscButton
		{
			idc = -1;
			text = "Напалмові бомби"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Ціна: 1 пункт";
			action = "closeDialog 0;[""NAPALM""] spawn A3A_fnc_NATObomb;";
		};
		class 4slots_R2: RscButton
		{
			idc = -1;
			text = "Додати до Авйапідтримки"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає вибраний авіатранспорт до очків Авіаудару";
			action = "closeDialog 0;nul = [] call A3A_fnc_addBombRun";
		};
	};
};


class dismiss_menu 				{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Звільнення"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Звільнити ботів/Підрозділ"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Звільняє вибраного бота або підрозділ, відшкодуючи їх вартість";
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\dismissPlayerGroup.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\dismissSquad.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {hint ""Не вибрано жодних ботів або підрозділів""}";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Garrison Units / Squads"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає вибраних ботів або підрозділ до Гарнізону обраного на карті";
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\addToGarrison.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\addToGarrison.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {hint ""Не вибрано жодних ботів або підрозділів""}";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class construction_menu 	{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Будування"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Малий окоп"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Створює малий окоп на одну людину";
			action = "closeDialog 0;nul = [""ST""] spawn A3A_fnc_construir;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Середній окоп"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Додає середній окоп для більш ніж одного солдата";
			action = "closeDialog 0; nul = [""MT""] spawn A3A_fnc_construir;";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Блокувати дорогу"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Створює деякі перешкоди для транспортних засобів";
			action = "closeDialog 0;nul = [""RB""] spawn A3A_fnc_construir;";
		};
		class HQ_button_unlock: RscButton
		{
			idc = -1;
			text = "Побудувати Бункер"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Має бути побудованим в Гарнізоні контрольованої зони, коштує грошей";
			action = "closeDialog 0;nul = createDialog ""bunker_menu""";
		};
	};
};
class bunker_menu 				{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Тип Бункеру"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Бункер з мешків"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Має бути побудованим в зоні Гарнізону. Він буде постійним";
			action = "closeDialog 0;nul = [""SB""] spawn A3A_fnc_construir;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Бетонний бункер"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Має бути побудованим в зоні Гарнізону. Він буде постійним";
			action = "closeDialog 0;nul = [""CB""] spawn A3A_fnc_construir;";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class squad_recruit 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = "Наймання Підрозділів"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; _nul = createDialog ""radio_comm"";";
		};
		class HQ_button_infsquad: RscButton
		{
			idc = 104;
			text = "Піхотне відділення"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[] execVM ""Dialogs\squadOptions.sqf"";";
		};
		class HQ_button_infteam: RscButton
		{
			idc = 105;
			text = "Вогнева група"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [gruposSDKmid] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_ATteam: RscButton
		{
			idc = 106;
			text = "Протитанкова група"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [gruposSDKAT] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_sniperTeam: RscButton
		{
			idc = 107;
			text = "Снайперська група"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [gruposSDKSniper] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_infsquadM: RscButton
		{
			idc = 108;
			text = "Кулеметна група"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMGStatic] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_infteamM: RscButton
		{
			idc = 109;
			text = "Протитанкова автівка"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKAT] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_ATteamM: RscButton
		{
			idc = 110;
			text = "Автівка з ППО"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [staticAABuenos] spawn A3A_fnc_addFIAsquadHC";
		};

		class HQ_button_mortar: RscButton
		{
			idc = 111;
			text = "Минометна група"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMortar] spawn A3A_fnc_addFIAsquadHC";
		};
	};
};
class player_money 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Гравець та Грошi"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = "Додати учасника сервера"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Використовуйте цей параметр, щоб додати гравця на якого ви дивитесь до списку учасникiв";
			action = "if (isMultiplayer) then {closeDialog 0;nul = [""add""] call A3A_fnc_memberAdd;} else {hint ""Тільки в Мультіплеєрі""};";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = "Видалити учасника сервера"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (isMultiplayer) then {closeDialog 0;nul = [""remove""] call A3A_fnc_memberAdd;} else {hint ""Тільки в Мультіплеєрі""};";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = "Передати 100€ гравцю"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[true] call A3A_fnc_donateMoney;";
		};
		class HQ_button_AA: RscButton
		{
			idc = -1;
			text = "Передати 100€ у Фракцію"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Це збільшить ваш престиж у Фракції";
			action = "[] call A3A_fnc_donateMoney;";
		};
	};
};
class garage_sell 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Продати/Поставити в Гараж"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""vehicle_manager"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Поставити в Гараж"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (player != theBoss) then {nul = [false] call A3A_fnc_garageVehicle} else {if (isMultiplayer) then {_nul = createDialog ""garage_check""} else {nul = [true] call A3A_fnc_garageVehicle}};";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Продати техніку"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; if (player == theBoss) then {nul = [] call A3A_fnc_sellVehicle} else {hint ""Тільки Командуючий може продавати техніку""};";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class garage_check 				{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Персональний гараж чи Гараж Фракції?"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""garage_sell"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Персональний гараж"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [false] call A3A_fnc_garageVehicle;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Гараж Фракції"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; nul = [true] call A3A_fnc_garageVehicle;";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class tu_madre 				{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Килимове бомбардування"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscListBox
		{
			idc = -1;
			//text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1.2)";
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
			pictureColor[] = {1,1,1,1}; // Picture color
			pictureColorSelect[] = {1,1,1,1}; // Selected picture color
			pictureColorDisabled[] = {0,1,0,1}; // Disabled picture color


			//action = "closeDialog 0; nul = createDialog ""NATO_Options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Фугасні бомби"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Cost: 10 points";
			action = "closeDialog 0;[""HE""] spawn A3A_fnc_NATObomb;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Килимове бомбардування"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Cost: 10 points";
			action = "closeDialog 0;[""CARPET""] spawn A3A_fnc_NATObomb;";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Напалмові бомби"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "Cost: 10 points";
			action = "closeDialog 0;[""NAPALM""] spawn A3A_fnc_NATObomb;";
		};
	};
};



//Mortar shift+Y
class mortar_type {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Боєприпаси міномету"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Фугасні"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;tipoMuni = SDKMortarHEMag;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Димові"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; tipoMuni = SDKMortarSmokeMag;";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class rounds_number {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Кількість пострілів"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_AS: RscButton
		{
			idc = -1;
			text = "1"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;rondas = 1;";
		};
		class HQ_button_CONV: RscButton
		{
			idc = -1;
			text = "2"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;rondas = 2";
		};
		class HQ_button_DES: RscButton
		{
			idc = -1;
			text = "3"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; rondas = 3";
		};
		class HQ_button_LOG: RscButton
		{
			idc = -1;
			text = "5"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;rondas = 5";
		};
		class HQ_button_RES: RscButton
		{
			idc = -1;
			text = "7"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;rondas = 7";
		};
		class HQ_button_vehicle: RscButton
		{
			idc = -1;
			text = "6"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;rondas = 6";
		};
		class HQ_button_fpsplus: RscButton
		{
			idc = -1;
			text = "4"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; rondas = 4";
		};

		class HQ_button_AA: RscButton
		{
			idc = -1;
			text = "8"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;rondas = 8";
		};
	};
};
class strike_type {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Тип вогню"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Вогонь по цілі"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;tipoArty = ""NORMAL"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Загороджувальний вогонь"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; tipoArty = ""BARRAGE"";";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};

//NATO
class NATO_player {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Меню спецназу"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Квадроцикл"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[] call A3A_fnc_NATOQuadbike";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Швидке переміщення"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[] spawn A3A_fnc_NATOFT";
		};
	};
};


//Undefined
class mbt_type {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Оберіть тип боєприпасів для удару"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = "Фугасні"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;tipoMuni = ""32Rnd_155mm_Mo_shells"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = "Керовані лазером"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; tipoMuni = ""2Rnd_155mm_Mo_LG"";";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Димові"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; tipoMuni = ""6Rnd_155mm_Mo_smoke"";";
		};
	};
};
class squad_options 	{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Опції відділення"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = "Назад"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""squad_recruit"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = "Піхотне відділення"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			//tooltip = "";
			action = "closeDialog 0;nul = [gruposSDKSquad] spawn A3A_fnc_addFIAsquadHC;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = "Інженерне відділення"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; nul = [gruposSDKSquadEng] spawn A3A_fnc_addFIAsquadHC;";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = 106;
			text = "Кулеметне відділення"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [gruposSDKSquadSupp,""MG""] spawn A3A_fnc_addFIAsquadHC;";
		};
		class HQ_button_unlock: RscButton
		{
			idc = 107;
			text = "Мінометне відділення"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [gruposSDKSquadSupp,""Mortar""] spawn A3A_fnc_addFIAsquadHC;";
		};
	};
};
class diff_menu 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Складність"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = "Легко"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;skillMult = 0.5";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = "Звичайно"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = "Важко"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; skillMult = 2";
		};
	};
};

class gameMode_menu 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = "Режим гри"; //--- ToDo: Localize;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = "Повстанці проти Влади проти Окупантів. Всі проти всіх."; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;gameMode = 1;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = "Повстанці проти Влади з Окупантами"; //--- ToDo: Localize;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;gameMode = 2;";
		};
		class HQ_button_Gremove: RscButton
		{
			idc = 106;
			text = "Повстанці проти Влади"; //--- ToDo: Localize;
			//x = 0.37749 * safezoneW + safezoneX;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;gameMode = 3;";
		};
		class HQ_button_offroad: RscButton
		{
			idc = 107;
		 	text = "Партизани проти Окупантів"; //--- ToDo: Localize;
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
		 	action = "closeDialog 0;gameMode = 4";
		 };
	};
};

class RscTitles {
	class Default {
       idd = -1;
       fadein = 0;
       fadeout = 0;
       duration = 0;
    };
    class H8erHUD {
        idd = 745;
        movingEnable =  0;
        enableSimulation = 1;
        enableDisplay = 1;
        duration     =  10e10;
        fadein       =  0;
        fadeout      =  0;
        name = "H8erHUD";
		onLoad = "with uiNameSpace do { H8erHUD = _this select 0 }";
		class controls {
		    class structuredText {
                access = 0;
                type = 13;
                idc = 1001;
                style = 0x00;
                lineSpacing = 1;
				x = 0.103165 * safezoneW + safezoneX;
				y = 0.007996 * safezoneH + safezoneY;//0.757996
				w = 0.778208 * safezoneW;
				h = 0.0660106 * safezoneH;
                size = 0.055;//0.020
                colorBackground[] = {0,0,0,0};
                colorText[] = {0.34,0.33,0.33,0};//{1,1,1,1}
                text = "";
                font = "PuristaSemiBold";
				class Attributes {
					font = "PuristaSemiBold";
					color = "#C1C0BB";//"#FFFFFF";
					align = "CENTER";
					valign = "top";
					shadow = true;
					shadowColor = "#000000";
					underline = false;
					size = "4";//4
				};
            };
		};
	};
};
