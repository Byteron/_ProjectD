#include "define.h"

std::string getRarityString(RARITY r) {
	switch (r) {
	case RARITY::POOR: return "(poor)";
	case RARITY::COMMON: return "(common)";
	case RARITY::UNCOMMON: return "(uncommon)";
	case RARITY::RARE: return "(rare)";
	case RARITY::EPIC: return "(epic)";
	case RARITY::LEGENDARY: return "(legendary)";
	default: break;
	}
}

std::string getWeaponString(WEAPON w) {
	switch (w) {
	case WEAPON::ARROW: return "Arrow";
	case WEAPON::AXE: return "Axe";
	case WEAPON::BOW: return "Bow";
	case WEAPON::DAGGER: return "Dagger";
	case WEAPON::GREATAXE: return "Greataxe";
	case WEAPON::GREATSWORD: return "Greatsword";
	case WEAPON::MACE: return "Mace";
	case WEAPON::STAFF: return "Staff";
	case WEAPON::SWORD: return "Sword";
	case WEAPON::WAND: return "Wand";
	case WEAPON::WARHAMMER: return "Warhammer";
	default: break;
	}
}

std::string getArmorString(ARMOR a) {
	return std::string();
}

std::string getTrinketString(TRINKET t) {
	return std::string();
}

std::string getPotionString(POTION p) {
	return std::string();
}

std::string getEquipString(EQUIP e) {
	return std::string();
}

std::string getNodeString(NODE n) {
	switch (n) {
	case NODE::HEAD: return "Head";
	case NODE::EAR: return "Eear";
	case NODE::NECK: return "Neck";
	case NODE::FINGER: return "Finger";
	case NODE::SHOULDER: return "Shoulder";
	case NODE::BACK: return "Back";
	case NODE::CHEST: return "Chest";
	case NODE::HAND: return "Bag";
	case NODE::LEGS: return "Bag";
	case NODE::FEET: return "Bag";
	case NODE::BAGPLACE: return "Bag";
	default: break;
	}
}

std::string getArchetypeString(ARCHETYPE a) {
	return std::string();
}

std::string getTargetString(TARGET t) {
	return std::string();
}

std::string getEffectString(EFFECT e) {
	return std::string();
}

std::string getNatureString(NATURE n) {
	return std::string();
}

std::string getSchoolString(SCHOOL s) {
	return std::string();
}

std::string getTickString(TICK t) {
	return std::string();
}
