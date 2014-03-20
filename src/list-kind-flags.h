/* list-kind-flags.h - object kind flags
 *
 * These are flags that go on object kinds, egos and artifacts, but not on
 * individual objects.
 *
 * Changing flag order will break savefiles. Flags below start from 1 on 
 * line 11, so a flag's sequence number is its line number minus 10.
 */
/* symbol       message */
KF(NONE,"")
KF(RAND_HI_RES,"")
KF(RAND_SUSTAIN,"")
KF(RAND_POWER,"")
KF(INSTA_ART,"")
KF(EASY_KNOW,"")
KF(GOOD, "")
KF(SHOW_DICE, "")
KF(SHOW_MULT, "")
KF(SPELLS_OK, "")
KF(MAX, "")
