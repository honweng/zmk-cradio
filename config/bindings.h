#define QWERTY_BINDINGS \
&kp Q               &kp W              &kp E              &kp R              &kp T               &kp Y              &kp U              &kp I              &kp O              &kp P                \
U_HML(LGUI, A)      U_HML(LALT, S)     U_HSL(LSHFT, D)    U_HML(LCTRL, F)    &kp G               &kp H              U_HMR(RCTRL, J)    U_HSR(RSHFT, K)    U_HMR(RALT, L)     U_HMR(RGUI, SQT)     \
U_LT(BUTTON, Z)     &kp X              &kp C              &kp V              &kp B               &kp N              &kp M              &kp COMMA          &kp PERIOD         U_LT(BUTTON, SLASH)  \
                                                          U_LT(NAVI, TAB)    U_LT(MOUSE, SPACE)  U_LT(SYMB, RET)    U_LT(NUMBER, BSPC)    

#define COLEMAK_DH_BINDINGS \
&kp Q              &kp W              &kp F              &kp P              &kp B               &kp J              &kp L              &kp U              &kp Y              &kp SQT             \
U_HML(LGUI, A)     U_HML(LALT, R)     U_HSL(LSHFT, S)    U_HML(LCTRL, T)    &kp G               &kp M              U_HMR(RCTRL, N)    U_HSR(RSHFT, E)    U_HMR(RALT, I)     U_HMR(RGUI, O)      \
U_LT(BUTTON, Z)    &kp X              &kp C              &kp D              &kp V               &kp K              &kp H              &kp COMMA          &kp PERIOD         U_LT(BUTTON, SLASH) \
                                                         U_LT(NAVI, TAB)    U_LT(MOUSE, SPACE)  U_LT(SYMB, RET)    U_LT(NUMBER, BSPC)  

#define QWERTY_TAP_BINDINGS \
&kp Q               &kp W              &kp E             &kp R              &kp T               &kp Y              &kp U              &kp I              &kp O              &kp P                \
&kp A               &kp S              &kp D             &kp F              &kp G               &kp H              &kp J              &kp K              &kp L              &kp SQT              \
U_LT(BUTTON, Z)     &kp X              &kp C             &kp V              &kp B               &kp N              &kp M              &kp COMMA          &kp PERIOD         U_LT(BUTTON, SLASH)  \
                                                         U_LT(NAVI, TAB)    U_LT(MOUSE, SPACE)  U_LT(SYMB, RET)    U_LT(NUMBER, BSPC)     

#define NUMBER_BINDINGS \
&kp LBKT           &kp N7             &kp N8             &kp N9             &kp RBKT            U_NA               &u_to_U_BASE       &u_to_U_EXTRA      &u_to_U_TAPL       U_BOOT             \
&kp SEMI           &kp N4             &kp N5             &kp N6             &kp EQUAL           U_NA               &kp RCTRL          &kp RSHFT          &kp RALT           &kp RGUI           \
&kp GRAVE          &kp N1             &kp N2             &kp N3             &kp BSLH            U_NA               U_NA               U_NA               U_NA               U_NA               \
                                                         &kp N0             &kp MINUS           U_NA               U_NA                        

#define SYMBOL_BINDINGS \
&kp LBRC           &kp AMPS           &kp ASTRK          &kp LPAR           &kp RBRC            U_NA               &u_to_U_BASE       &u_to_U_EXTRA      &u_to_U_TAPL       U_BOOT            \
&kp COLON          &kp DLLR           &kp PRCNT          &kp CARET          &kp PLUS            U_NA               &kp RCTRL          &kp RSHFT          &kp RALT           &kp RGUI          \
&kp TILDE          &kp EXCL           &kp AT             &kp HASH           &kp PIPE            U_NA               U_NA               U_NA               U_NA               U_NA              \
                                                         &kp RPAR           &kp UNDER           U_NA               U_NA                         

#define FUNC_BINDINGS \
&kp F12            &kp F7             &kp F8             &kp F9             &kp PSCRN           U_NA               &u_to_U_BASE       &u_to_U_EXTRA      &u_to_U_TAPL       U_BOOT            \
&kp F11            &kp F4             &kp F5             &kp F6             &kp SLCK            U_NA               &kp RCTRL          &kp RSHFT          &kp RALT           &kp RGUI          \
&kp F10            &kp F1             &kp F2             &kp F3             &kp PAUSE_BREAK     U_NA               U_NA               U_NA               U_NA               U_NA              \
                                                         &kp TAB            &kp DEL             U_NA               U_NA                                     

#define NAVI_BINDINGS \
U_BOOT             &u_to_U_TAPL       &u_to_U_EXTRA      &u_to_U_BASE       U_NA                U_RDO              U_PST              U_CPY              U_CUT              U_UND              \
&kp LGUI           &kp LALT           &kp LSHFT          &kp LCTRL          U_NA                &u_caps_word       &kp LEFT           &kp DOWN           &kp UP             &kp RIGHT          \
U_NA               U_NA               U_NA               U_NA               U_NA                &kp INS            &kp HOME           &kp PG_DN          &kp PG_UP          &kp END            \
                                                         U_NA               U_NA                &kp RET            &kp DEL                      
#define MOUSE_BINDINGS \
U_BOOT             &u_to_U_TAPL       &u_to_U_EXTRA      &u_to_U_BASE       U_NA                U_RDO              U_PST              U_CPY              U_CUT              U_UND             \
&kp LGUI           &kp LALT           &kp LSHFT          &kp LCTRL          U_NA                U_NA               U_MS_L             U_MS_D             U_MS_U             U_MS_R            \
U_NA               U_NA               U_NA               U_NA               U_NA                U_NA               U_WH_L             U_WH_D             U_WH_U             U_WH_R            \
                                                         U_NA               U_NA                U_BTN1             U_BTN2                           

#define MEDIA_BINDINGS \
U_BOOT             &u_to_U_TAPL       &u_to_U_EXTRA      &u_to_U_BASE       U_NA                U_NA               U_NA               U_NA               U_NA              U_NA             \
&kp LGUI           &kp LALT           &kp LSHFT          &kp LCTRL          U_NA                U_EP_TOG           &kp C_PREV         &kp C_VOL_DN       &kp C_VOL_UP       &kp C_NEXT        \
U_NA               U_NA               U_NA               U_NA               U_NA                &u_out_tog         &u_bt_sel_0        &u_bt_sel_1        &u_bt_sel_2        &u_bt_sel_3       \
                                                         U_NA               U_NA                &kp C_STOP         &kp C_PP                         

#define BUTTON_BINDINGS \
U_UND              U_CUT              U_CPY              U_PST              U_RDO               U_RDO              U_PST              U_CPY              U_CUT              U_UND             \
&kp LGUI           &kp LALT           &kp LSHFT          &kp LCTRL          U_NA                U_NA               &kp RCTRL          &kp RSHFT          &kp RALT           &kp RGUI          \
U_UND              U_CUT              U_CPY              U_PST              U_RDO               U_RDO              U_PST              U_CPY              U_CUT              U_UND             \
                                                         U_BTN2             U_BTN1              U_BTN1             U_BTN2                     
