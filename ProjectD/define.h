#pragma once

#include <string>

#include "form.h"

#define DEBUGLEVEL Log::DEBUG

#define DHAND1 0
#define DHAND2 1
#define DHEAD 2
#define DEAR1 3
#define DEAR2 4
#define DNECK 5
#define DFINGER1 6
#define DFINGER2 7
#define DSHOULDER 8
#define DBACK 9
#define DCHEST 10
#define DHANDS 11
#define DFEET 12
#define DBAGPLACE1 13
#define DBAGPLACE2 14
#define DBAGPLACE3 15
#define DBAGPLACE4 16

// ENUMERATORS
// ACTOR
enum class EQUIP { WEAPONHAND, SHIELDHAND, BOTHHANDS, TWOHANDS, NORMAL, NONE };


// NODE
enum class NODE { HEAD, EAR, NECK, FINGER, SHOULDER, BACK, CHEST, HAND, HANDS, LEGS, FEET, BAGPLACE, NONE };


// ITEM
enum class RARITY { POOR, COMMON, UNCOMMON, RARE, EPIC, LEGENDARY };
enum class WEAPON { DAGGER, SWORD, AXE, MACE, GREATSWORD, GREATAXE, WARHAMMER, STAFF, BOW, ARROW, WAND };
enum class ARMOR { HELMET, PAULDRON, BREASTPLATE, ROBE, GLOVES, PANTS, BOOTS, SHIELD };
enum class TRINKET { DIADEM, EARRING, NECKLESS, RING };
enum class POTION { POTION, POISON, FOOD };

// MAGIC
enum class ARCHETYPE { INSTANT, ENCHANTMENT, TRAP, PASSIVE };
enum class TARGET { SELF, CONTACT, ACTOR, LOCATION, };
enum class EFFECT { ABSORB, HARM, HEAL, ALTER };
enum class NATURE { PHYSICAL, NATURE, ARCANE, HEAT, COLD, HOLY, SHADOW};
enum class SCHOOL { WARRIOR, HUNTER, THIEF, MAGE, WARLOCK, RUNEMASTER, PRIEST, DRUID, SHAMAN };
enum class TICK { TURNSTART, MOVESTART, MOVEEND, TURNEND, NONE };

// get enum string functions
std::string getEquipString(EQUIP e);
std::string getNodeString(NODE n);
std::string getRarityString(RARITY r);
std::string getWeaponString(WEAPON w);
std::string getArmorString(ARMOR a);
std::string getTrinketString(TRINKET t);
std::string getPotionString(POTION p);
std::string getArchetypeString(ARCHETYPE a);
std::string getTargetString(TARGET t);
std::string getEffectString(EFFECT e);
std::string getNatureString(NATURE n);
std::string getSchoolString(SCHOOL s);
std::string getTickString(TICK t);


