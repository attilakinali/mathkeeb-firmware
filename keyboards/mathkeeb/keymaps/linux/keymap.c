#include "mathkeeb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		M(17), M(18), KC_X, KC_Y, KC_Z, KC_A, KC_B, KC_C, 
		M(29), KC_LABK, KC_RABK, KC_LBRC, KC_RBRC, M(7), M(8), KC_BSPC, 
		M(19), KC_LPRN, KC_RPRN, KC_SLSH, KC_ASTR, KC_MINS, KC_PLUS, M(1), 
		M(20), M(3), M(26), M(25), KC_7, KC_8, KC_9, M(2), 
		M(21), M(14), M(16), KC_PERC, KC_4, KC_5, KC_6, KC_EQL, 
		KC_LSFT, KC_CIRC, M(12), M(13), KC_1, KC_2, KC_3, KC_ENT, 
		LT(1, KC_NO), KC_PIPE, KC_AMPR, KC_COMM, KC_0, M(0), KC_DOT),

	KEYMAP(
		M(31), M(34), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_D, 
		M(30), M(5), M(6), KC_LCBR, KC_RCBR, M(9), M(10), KC_TRNS, 
		M(22), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		M(23), M(4), M(27), M(28), KC_HOME, KC_UP, KC_PGUP, KC_TRNS, 
		M(24), KC_TRNS, M(33), KC_HASH, KC_LEFT, KC_TRNS, KC_RGHT, M(32), 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_DOWN, KC_PGDN, TO(2), 
		KC_TRNS, KC_TRNS, KC_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		M(17), M(18), KC_X, KC_Y, KC_Z, KC_A, KC_B, KC_C, 
		M(29), KC_LABK, KC_RABK, KC_LBRC, KC_RBRC, M(69), M(7), KC_BSPC, 
		M(19), KC_LPRN, KC_RPRN, M(35), M(36), KC_MINS, KC_PLUS, M(1), 
		M(20), M(3), M(26), M(25), KC_7, KC_8, KC_9, M(2), 
		M(21), M(68), M(16), KC_PERC, KC_4, KC_5, KC_6, KC_EQL, 
		KC_LSFT, M(38), M(42), M(43), KC_1, KC_2, KC_3, KC_ENT, 
		LT(3, KC_NO), KC_PIPE, KC_AMPR, KC_COMM, KC_0, M(0), KC_DOT),

	KEYMAP(
		M(31), M(34), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_D, 
		M(30), M(5), M(6), KC_LCBR, KC_RCBR, M(37), M(10), KC_TRNS, 
		M(39), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		M(40), M(4), M(27), M(28), KC_HOME, KC_UP, KC_PGUP, KC_TRNS, 
		M(41), M(44), M(33), KC_HASH, KC_LEFT, KC_TRNS, KC_RGHT, M(32), 
		KC_TRNS, KC_CIRC, M(12), M(13), KC_END, KC_DOWN, KC_PGDN, TO(4), 
		KC_TRNS, KC_TRNS, KC_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		M(54), M(55), KC_X, KC_Y, KC_Z, KC_A, KC_B, KC_C, 
		M(65), KC_LABK, KC_RABK, KC_LBRC, KC_RBRC, M(45), M(46), KC_BSPC, 
		M(56), KC_LPRN, KC_RPRN, KC_SLSH, KC_ASTR, KC_MINS, KC_PLUS, M(1), 
		M(57), M(3), M(64), M(62), KC_7, KC_8, KC_9, M(2), 
		M(58), M(51), M(53), KC_PERC, KC_4, KC_5, KC_6, KC_EQL, 
		KC_LSFT, M(48), M(49), M(50), KC_1, KC_2, KC_3, KC_ENT, 
		LT(5, KC_NO), KC_PIPE, KC_AMPR, KC_COMM, KC_0, M(0), KC_DOT),

	KEYMAP(
		M(31), M(34), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_D, 
		M(30), M(5), M(6), KC_LCBR, KC_RCBR, M(66), M(47), KC_TRNS, 
		M(59), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		M(60), M(4), KC_TRNS, M(63), KC_HOME, KC_UP, KC_PGUP, KC_TRNS, 
		M(61), KC_TRNS, M(33), KC_HASH, KC_LEFT, KC_TRNS, KC_RGHT, M(32), 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_DOWN, KC_PGDN, TO(6), 
		KC_TRNS, KC_TRNS, KC_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		M(75), M(76), KC_X, KC_Y, KC_Z, KC_A, KC_B, KC_C, 
		M(80), KC_LABK, KC_RABK, KC_LBRC, KC_RBRC, M(7), M(8), KC_BSPC, 
		M(19), KC_LPRN, KC_RPRN, M(72), M(78), KC_MINS, KC_PLUS, M(1), 
		M(20), M(3), M(84), M(25), KC_7, KC_8, KC_9, M(2), 
		M(21), M(14), M(77), KC_PERC, KC_4, KC_5, KC_6, KC_EQL, 
		KC_LSFT, KC_CIRC, M(12), M(13), KC_1, KC_2, KC_3, KC_ENT, 
		LT(7, KC_NO), KC_PIPE, KC_AMPR, KC_COMM, KC_0, M(0), KC_DOT),

	KEYMAP(
		M(31), M(34), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_D, 
		M(30), M(73), M(74), KC_LCBR, KC_RCBR, M(82), M(81), KC_TRNS, 
		M(22), KC_TRNS, KC_TRNS, KC_TRNS, M(71), KC_TRNS, KC_TRNS, KC_TRNS, 
		M(23), M(4), M(27), M(28), KC_HOME, KC_UP, KC_PGUP, KC_TRNS, 
		M(24), M(88), M(33), M(79), KC_LEFT, KC_TRNS, KC_RGHT, M(70), 
		KC_TRNS, M(85), M(86), M(87), KC_END, KC_DOWN, KC_PGDN, TO(0), 
		KC_TRNS, KC_TRNS, KC_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( T(0), T(0), END );
			}
			break;
		case 1:
			if (record->event.pressed) {
				return MACRO( D(LCTL), T(A), U(LCTL), END );
			}
			break;
		case 2:
			if (record->event.pressed) {
				return MACRO( D(LCTL), T(A), U(LCTL), T(DEL), END );
			}
			break;
		case 3:
			if (record->event.pressed) {
				return MACRO( T(F), D(LSFT), T(9), U(LSFT), T(X), D(LSFT), T(0), U(LSFT), END );
			}
			break;
		case 4:
			if (record->event.pressed) {
				return MACRO( T(G), D(LSFT), T(9), U(LSFT), T(X), D(LSFT), T(0), U(LSFT), END );
			}
			break;
		case 5:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(COMM), U(LSFT), T(EQL), END );
			}
			break;
		case 6:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(DOT), U(LSFT), T(EQL), END );
			}
			break;
		case 7:
			if (record->event.pressed) {
				return MACRO( T(L), T(O), T(G), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 8:
			if (record->event.pressed) {
				return MACRO( T(L), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 9:
			if (record->event.pressed) {
				return MACRO( T(1), T(0), D(LSFT), T(6), U(LSFT), END );
			}
			break;
		case 10:
			if (record->event.pressed) {
				return MACRO( T(E), T(X), T(P), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 12:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(6), U(LSFT), T(2), END );
			}
			break;
		case 13:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(6), U(LSFT), T(3), END );
			}
			break;
		case 14:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(6), T(9), U(LSFT), T(MINS), T(1), D(LSFT), T(0), U(LSFT), END );
			}
			break;
		case 16:
			if (record->event.pressed) {
				return MACRO( T(S), T(Q), T(R), T(T), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 17:
			if (record->event.pressed) {
				return MACRO( T(S), T(U), T(M), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 18:
			if (record->event.pressed) {
				return MACRO( T(P), T(R), T(O), T(D), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 19:
			if (record->event.pressed) {
				return MACRO( T(S), T(I), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 20:
			if (record->event.pressed) {
				return MACRO( T(C), T(O), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 21:
			if (record->event.pressed) {
				return MACRO( T(T), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 22:
			if (record->event.pressed) {
				return MACRO( T(A), T(R), T(C), T(S), T(I), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 23:
			if (record->event.pressed) {
				return MACRO( T(A), T(R), T(C), T(C), T(O), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 24:
			if (record->event.pressed) {
				return MACRO( T(A), T(R), T(C), T(T), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 25:
			if (record->event.pressed) {
				return MACRO( T(A), T(B), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 26:
			if (record->event.pressed) {
				return MACRO( T(A), T(V), T(G), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 27:
			if (record->event.pressed) {
				return MACRO( T(M), T(E), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 28:
			if (record->event.pressed) {
				return MACRO( T(N), T(O), T(R), T(M), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 29:
			if (record->event.pressed) {
				return MACRO( T(P), T(I), END );
			}
			break;
		case 30:
			if (record->event.pressed) {
				return MACRO( D(LCTRL), D(LSFT), T(U), U(LSFT), U(LCTRL), T(0), T(3), T(C), T(0), T(ENT), END );
			}
			break;
		case 31:
			if (record->event.pressed) {
				return MACRO( D(LCTRL), D(LSFT), T(U), U(LSFT), U(LCTRL), T(2), T(2), T(1), T(1), T(ENT), END );
			}
			break;
		case 32:
			if (record->event.pressed) {
				return MACRO( D(LCTRL), D(LSFT), T(U), U(LSFT), U(LCTRL), T(0), T(0), T(B), T(1), T(ENT), END );
			}
			break;
		case 33:
			if (record->event.pressed) {
				return MACRO( D(LCTRL), D(LSFT), T(U), U(LSFT), U(LCTRL), T(2), T(2), T(1), T(A), T(ENT), END );
			}
			break;
		case 34:
			if (record->event.pressed) {
				return MACRO( D(LCTRL), D(LSFT), T(U), U(LSFT), U(LCTRL), T(0), T(3), T(A), T(0), T(ENT), END);
			}
			break;
		case 35:
			if (record->event.pressed) {
				return MACRO( T(DOT), T(SLSH), END );
			}
			break;
		case 36:
			if (record->event.pressed) {
				return MACRO( T(DOT), T(PAST), END );
			}
			break;
		case 37:
			if (record->event.pressed) {
				return MACRO( T(1), T(0), T(DOT), D(LSFT), T(6), U(LSFT), END );
			}
			break;
		case 38:
			if (record->event.pressed) {
				return MACRO( T(DOT), D(LSFT), T(6), U(LSFT), END );
			}
			break;
		case 39:
			if (record->event.pressed) {
				return MACRO( T(A), T(S), T(I), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 40:
			if (record->event.pressed) {
				return MACRO( T(A), T(C), T(O), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 41:
			if (record->event.pressed) {
				return MACRO( T(A), T(T), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 42:
			if (record->event.pressed) {
				return MACRO( T(DOT), D(LSFT), T(6), U(LSFT), T(2), END );
			}
			break;
		case 43:
			if (record->event.pressed) {
				return MACRO( T(DOT), D(LSFT), T(6), U(LSFT), T(3), END );
			}
			break;
		case 44:
			if (record->event.pressed) {
				return MACRO( T(I), T(N), T(V), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 45:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(L), T(O), T(G), T(1), T(0), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 46:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(L), T(O), T(G), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 47:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(E), T(X), T(P), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 48:
			if (record->event.pressed) {
				return MACRO( T(PAST), T(PAST), END );
			}
			break;
		case 49:
			if (record->event.pressed) {
				return MACRO( T(PAST), T(PAST), T(2), END );
			}
			break;
		case 50:
			if (record->event.pressed) {
				return MACRO( T(PAST), T(PAST), T(3), END );
			}
			break;
		case 51:
			if (record->event.pressed) {
				return MACRO( T(PAST), T(PAST), D(LSFT), T(9), U(LSFT), T(MINS), T(1), D(LSFT), D(0), U(LSFT), U(0), END );
			}
			break;
		case 53:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(S), T(Q), T(R), T(T), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 54:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(S), T(U), T(M), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 55:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(P), T(R), T(O), T(D), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 56:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(S), T(I), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 57:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(C), T(O), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 58:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(T), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 59:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(A), T(S), T(I), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 60:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(A), T(C), T(O), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 61:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(A), T(T), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 62:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(A), T(B), T(S), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 63:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(L), T(I), T(N), T(A), T(L), T(G), T(DOT), T(N), T(O), T(R), T(M), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 64:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(M), T(E), T(A), T(N), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 65:
			if (record->event.pressed) {
				return MACRO( T(N), T(P), T(DOT), T(P), T(I), END );
			}
			break;
		case 66:
			if (record->event.pressed) {
				return MACRO( T(1), T(0), T(PAST), T(PAST), END );
			}
			break;
		case 68:
			if (record->event.pressed) {
				return MACRO( T(DOT), D(LSFT), T(6), T(9), U(LSFT), T(MINS), T(1), D(LSFT), T(0), U(LSFT), END );
			}
			break;
		case 69:
			if (record->event.pressed) {
				return MACRO( T(L), T(O), T(G), T(1), T(0), D(LSFT), T(9), U(LSFT), END );
			}
			break;
		case 70:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(P), T(M), END );
			}
			break;
		case 71:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(T), T(I), T(M), T(E), T(S), END );
			}
			break;
		case 72:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(D), T(I), T(V), END );
			}
			break;
		case 73:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(L), T(E), END );
			}
			break;
		case 74:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(G), T(E), END );
			}
			break;
		case 75:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(S), T(U), T(M), D(LSFT), T(MINS), T(LBRC), T(RBRC), T(6), T(LBRC), T(RBRC), U(LSFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), END );
			}
			break;
		case 76:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(P), T(R), T(O), T(D), D(LSFT), T(MINS), T(LBRC), T(RBRC), T(6), T(LBRC), T(RBRC), U(LSFT), T(LEFT), T(LEFT), T(LEFT), T(LEFT), END );
			}
			break;
		case 77:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(S), T(Q), T(R), T(T), D(LSFT), T(LBRC), U(LSFT), END );
			}
			break;
		case 78:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(C), T(D), T(O), T(T), END );
			}
			break;
		case 79:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(S), T(H), T(A), T(R), T(P), END );
			}
			break;
		case 80:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(P), T(I), END );
			}
			break;
		case 81:
			if (record->event.pressed) {
				return MACRO( T(E), D(LSFT), T(6), T(LBRC), U(LSFT), END );
			}
			break;
		case 82:
			if (record->event.pressed) {
				return MACRO( T(1), T(0), D(LSFT), T(6), T(LBRC), U(LSFT), END );
			}
			break;
		case 83:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(F), T(R), T(A), T(C), END );
			}
			break;
		case 84:
			if (record->event.pressed) {
				return MACRO( T(BSLS), T(B), T(A), T(R), END );
			}
			break;
		case 85:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(MINS), U(LSFT), END );
			}
			break;
		case 86:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(MINS), U(LSFT), T(2), END );
			}
			break;
		case 87:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(MINS), U(LSFT), T(3), END );
			}
			break;
		case 88:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(MINS), T(LBRC), U(LSFT), T(MINS), T(1), D(LSFT), T(RBRC), U(LSFT), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_LNX);
}