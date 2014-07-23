EFFECT(ATOMIC_RANDOM,						FALSE,	"a random choice from")
EFFECT(ATOMIC_HEAL_HP,						FALSE,	"heals %s hitpoints")
EFFECT(ATOMIC_NOURISH,						FALSE,	"feeds you for %s turns")
EFFECT(ATOMIC_CRUNCH,						FALSE,	"crunches")
EFFECT(ATOMIC_CURE,							FALSE,	"cures %s")
EFFECT(ATOMIC_TIMED_SET,					FALSE,	"makes you %s")
EFFECT(ATOMIC_TIMED_INC,					FALSE,	"increases %s")
EFFECT(ATOMIC_TIMED_DEC,					FALSE,	"cures some %s")
EFFECT(ATOMIC_SET_NOURISH,					FALSE,	"makes your stomach %s")
EFFECT(ATOMIC_CONFUSING,					FALSE,	"causes your next attack upon a monster to confuse it")
EFFECT(ATOMIC_RUNE,							FALSE,	"inscribes a glyph of warding beneath you, which monsters cannot move onto")
EFFECT(ATOMIC_RESTORE_STAT,					FALSE,	"restores your %s")
EFFECT(ATOMIC_DRAIN_STAT,					FALSE,	"reduces your %s with damage %s")
EFFECT(ATOMIC_LOSE_RANDOM_STAT,				FALSE,	"reduces a stat other than %s")
EFFECT(ATOMIC_GAIN_STAT,					FALSE,	"increases your %s")
EFFECT(ATOMIC_RESTORE_EXP,					FALSE,	"restores your experience")
EFFECT(ATOMIC_GAIN_EXP,						FALSE,	"increases your experience by %s")
EFFECT(ATOMIC_LOSE_EXP,						FALSE,	"loses a quarter of your experience")
EFFECT(ATOMIC_RESTORE_MANA,					FALSE,	"restores %s mana")
EFFECT(ATOMIC_REMOVE_CURSE,					FALSE,	"removes curses")
EFFECT(ATOMIC_REMOVE_ALL_CURSE,				FALSE,	"removes all curses")
EFFECT(ATOMIC_RECALL,						FALSE,	"returns you from the dungeon or takes you to the dungeon after a short delay")
EFFECT(ATOMIC_DEEP_DESCENT,					FALSE,	"teleports you five levels down")
EFFECT(ATOMIC_MAP_AREA,						FALSE,	"maps the area around you")
EFFECT(ATOMIC_DETECT_TRAPS,					FALSE,	"detects traps nearby")
EFFECT(ATOMIC_DETECT_DOORS,					FALSE,	"detects doors nearby")
EFFECT(ATOMIC_DETECT_STAIRS,				FALSE,	"detects stairs nearby")
EFFECT(ATOMIC_DETECT_GOLD,					FALSE,	"detects gold nearby")
EFFECT(ATOMIC_SENSE_OBJECTS,				FALSE,	"senses objects nearby")
EFFECT(ATOMIC_DETECT_OBJECTS,				FALSE,	"detects objects nearby")
EFFECT(ATOMIC_DETECT_VISIBLE_MONSTERS,		FALSE,	"detects visible creatures nearby")
EFFECT(ATOMIC_DETECT_INVISIBLE_MONSTERS,	FALSE,	"detects invisible creatures nearby")
EFFECT(ATOMIC_DETECT_EVIL,					FALSE,	"detects evil creatures nearby")
EFFECT(ATOMIC_CREATE_STAIRS,				FALSE,	"creates a staircase beneath your feet")
EFFECT(ATOMIC_DISENCHANT,					FALSE,	"disenchants one of your wielded items")
EFFECT(ATOMIC_ENCHANT,						FALSE,	"attempts to magically enhance a %s")
EFFECT(ATOMIC_IDENTIFY,						FALSE,	"reveals to you the extent of an item's magical powers")
EFFECT(ATOMIC_IDENTIFY_PACK,				FALSE,	"identifies all items in your pack")
EFFECT(ATOMIC_RECHARGE,						FALSE,	"tries to recharge a wand or staff, destroying the wand or staff on failure")
EFFECT(ATOMIC_PROJECT_LOS,					FALSE,	"%s all monsters in line of sight")
EFFECT(ATOMIC_ACQUIRE,						FALSE,	"creates %s good items nearby")
EFFECT(ATOMIC_AGGRAVATE,					FALSE,	"awakens all nearby sleeping monsters and hastens all monsters within line of sight")
EFFECT(ATOMIC_SUMMON,						FALSE,	"summons %s at the current dungeon level")
EFFECT(ATOMIC_BANISH,						FALSE,	"removes all of a given creature type from the level")
EFFECT(ATOMIC_MASS_BANISH,					FALSE,	"removes all nearby creatures")
EFFECT(ATOMIC_PROBE,						FALSE,	"gives you information on the health and abilities of monsters you can see")
EFFECT(ATOMIC_TELEPORT,						FALSE,	"teleports you randomly up to %s squares away")
EFFECT(ATOMIC_TELEPORT_TO,					FALSE,	"teleports you to a monster")
EFFECT(ATOMIC_TELEPORT_LEVEL,				FALSE,	"teleports you one level up <or down")
EFFECT(ATOMIC_DESTRUCTION,					FALSE,	"destroys an area around you in the shape of a circle radius 15, and blinds you for 1d10+10 turns")
EFFECT(ATOMIC_EARTHQUAKE,					FALSE,	"causes an earthquake around you")
EFFECT(ATOMIC_ENLIGHTENMENT,				FALSE,	"completely lights up and magically maps the level")
EFFECT(ATOMIC_LIGHT_AREA,					FALSE,	"lights up the surrounding area, hurting light-sensitive creatures")
EFFECT(ATOMIC_DARKEN_AREA,					FALSE,	"darkens the surrounding area")
EFFECT(ATOMIC_BALL,							TRUE,	"fires a ball of %s with damage %s")
EFFECT(ATOMIC_BREATH,						TRUE,	"fires a ball of %s with damage %s")
EFFECT(ATOMIC_SWARM,						TRUE,	"fires a series of balls of %s with damage %s")
EFFECT(ATOMIC_STAR,							FALSE,	"fires a line of %s in all directions, each one causing %s damage")
EFFECT(ATOMIC_STAR_BALL,					FALSE,	"fires a ball of %s in all directions, each one causing %s damage")
EFFECT(ATOMIC_BOLT,							TRUE,	"creates a %s bolt with damage %s")
EFFECT(ATOMIC_BEAM,							TRUE,	"creates a %s beam with damage %s")
EFFECT(ATOMIC_BOLT_OR_BEAM,					TRUE,	"creates a %s bolt or beam with damage %s")
EFFECT(ATOMIC_LINE,							TRUE,	"creates a %s line with damage %s")
EFFECT(ATOMIC_ALTER,						TRUE,	"creates a %s line which affects all %s")
EFFECT(ATOMIC_BOLT_AWARE,					TRUE,	"creates a %s bolt with damage %s")
EFFECT(ATOMIC_TOUCH,						FALSE,	"makes all adjacent %s %s")
EFFECT(ATOMIC_TOUCH_AWARE,					FALSE,	"makes all adjacent %s %s")
EFFECT(ATOMIC_CURSE_ARMOR,					FALSE,	"curses your worn armor")
EFFECT(ATOMIC_CURSE_WEAPON,					FALSE,	"curses your wielded melee weapon")
EFFECT(ATOMIC_BRAND_WEAPON,					FALSE,	"brands your wielded melee weapon")
EFFECT(ATOMIC_BRAND_AMMO,					FALSE,	"brands a stack of ammunition")
EFFECT(ATOMIC_BRAND_BOLTS,					FALSE,	"brands bolts with fire, in an unbalanced fashion")
EFFECT(ATOMIC_BIZARRE,						TRUE,	"does bizarre things")
EFFECT(ATOMIC_WONDER,						TRUE,	"creates random and unpredictable effects")

EFFECT(TRAP_DOOR,							FALSE,	"a trap door which drops you down a level")
EFFECT(TRAP_PIT,							FALSE,	"a pit trap - the fall might hurt")
EFFECT(TRAP_PIT_SPIKES,						FALSE,	"a pit trap, with nasty spikes")
EFFECT(TRAP_PIT_POISON,						FALSE,	"a pit trap, with poisoned spikes")
EFFECT(TRAP_RUNE_SUMMON,					FALSE,	"a rune which summons monsters")
EFFECT(TRAP_RUNE_TELEPORT,					FALSE,	"a rune which teleports")
EFFECT(TRAP_SPOT_FIRE,						FALSE,	"a magical fire trap")
EFFECT(TRAP_SPOT_ACID,						FALSE,	"a magical acid trap")
EFFECT(TRAP_DART_SLOW,						FALSE,	"a dart which slows movements")
EFFECT(TRAP_DART_LOSE_STR,					FALSE,	"a dart which drains strength")
EFFECT(TRAP_DART_LOSE_DEX,					FALSE,	"a dart which drains dexterity")
EFFECT(TRAP_DART_LOSE_CON,					FALSE,	"a dart which drains constitution")
EFFECT(TRAP_GAS_BLIND,						FALSE,	"blinding gas")
EFFECT(TRAP_GAS_CONFUSE,					FALSE,	"confusing gas")
EFFECT(TRAP_GAS_POISON,						FALSE,	"poison gas")
EFFECT(TRAP_GAS_SLEEP,						FALSE,	"soporific gas")