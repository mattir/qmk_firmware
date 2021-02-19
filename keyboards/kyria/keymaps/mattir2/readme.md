# Mattir's keymap & configs for [Kyria](https://github.com/splitkb/kyria)

## Keymap

This is my customized keymap and layer setup for my second Kyria split keyboard. Keys in the diagrams below that are blank are "transparent" and they drop down to the lowest layer that has them defined. Keys in the diagram with 4 X's (`XXXX`) are disabled on the layer they appear on.

The PCBs for the Kyria are rev. 1.3 with the outside column cut off to make this a 3x5 layout.
Each half uses an Elite-C low-profile (rev 4) microcontroller with USB-C connector
The boards are outfitted with Kailh Choc Jade switches and MBK keycaps

Unlike my first build, this is a minimal build with no encoders, RGB LEDs, or OLED displays.

### Base layer 0 `QWERTY`

This base layer is using "homerow mods" to provide Alt `a()`, Ctrl `c()`, Gui `g()`, and Shift `s()` functionality. Since I use mostly Macs, the order is optimized for that, but if you use Windows or Linux you'll want to swap Gui and Ctrl.

```
,----------------------------------.                              ,----------------------------------.
|   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |
|------+------+------+------+------|                              |------+------+------+------+------|
| a(A) | c(S) | g(D) | s(F) |   G  |                              |   H  | s(J) | g(K) | c(L) | a(;) |
|------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------|
|   Z  |   X  |   C  |   V  |   B  | Esc  | Home |  | End  |  Tab |   N  |   M  | ,  < | . >  | /  ? |
`-------------+------+------+------+------|------|  |------|------+------+------+------+-------------'
              | Lead |  | \ | - _  |L1/Spc| L2/~ |  |L2/Ent|L1/Spc| Bksp | " '  | Lead |
              `----------------------------------'  `----------------------------------'
```

### Symbols and Numbers layer 1 `LOWER`

```
,----------------------------------.                              ,----------------------------------.
|  !   |  @   |  #   |  {   |  }   |                              |  1   |  2   |  3   |  4   |  5   |
|------+------+------+------+------|                              |------+------+------+------+------|
|  $   |  %   |  ^   |  (   |  )   |                              |  6   |  7   |  8   |  9   |  0   |
|------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------|
|  &   | < ,  | > .  |  [   |  ]   |      |      |  |      |      |  =   |  +   |  -   |  *   |  /   |
`-------------+------+------+------+------|------|  |------|------+------+------+------+-------------'
              |      |      |      |      |      |  |      |      | Del  |      |      |
              `----------------------------------'  `----------------------------------'
```

### Numpad and Nav layer 2 `RAISE`

This layer also uses "honerow mods" same as described above, but only on the left half.

```
,----------------------------------.                              ,----------------------------------.
| np1  | np2  | np3  | np4  | np5  |                              | XXXX | Home |  Up  | End  | XXXX |
|------+------+------+------+------|                              |------+------+------+------+------|
|a(np6)|c(np7)|g(np8)|s(np9)| np0  |                              | PgUp | Left | Down | Right| XXXX |
|------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------|
| np / | np * | np - | np + | np = |      |      |  |      |      | PgDn | XXXX | XXXX | XXXX | XXXX |
`-------------+------+------+------+------|------|  |------|------+------+------+------+-------------'
              |      | np . | Enter|      |      |  |      |      |      |      |      |
              `----------------------------------'  `----------------------------------'
```

### Function and Media layer 3 `FUNCS`

```
,----------------------------------.                              ,----------------------------------.
| F1   |  F2  | F3   | F4   | F5   |                              | XXXX | XXXX | Vol+ | XXXX | Pwr  |
|------+------+------+------+------|                              |------+------+------+------+------|
| F6   |  F7  | F8   | F9   | F10  |                              |Bri Up| Mute | Vol- | XXXX | XXXX |
|------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------|
| F11  |  F12 | F13  | F14  | F15  |      |      |  |      |      |Bri Dn| Prev | Play | Next | XXXX |
`-------------+------+------+------+------|------|  |------|------+------+------+------+-------------'
              |      |      |      |      |      |  |      |      |      |      |      |
              `----------------------------------'  `----------------------------------'
```
