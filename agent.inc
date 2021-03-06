/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

/* This file was automatically generated */

/* Symbolic constants */
#define SYM_ATTRIBUTE 1
#define SYM_CHOICES 2
#define SYM_CONFLICT 3
#define SYM_IMPASSE 4
#define SYM_INPUT_LINK 5
#define SYM_IO 6
#define SYM_ITEM 7
#define SYM_MULTIPLE 8
#define SYM_NIL 9
#define SYM_NONE 10
#define SYM_NO_CHANGE 11
#define SYM_OPERATOR 12
#define SYM_OUTPUT_LINK 13
#define SYM_QUIESCENCE 14
#define SYM_STATE 15
#define SYM_SUPERSTATE 16
#define SYM_TIE 17
#define SYM_TYPE 18
#define SYM_T 19
#define SYM_SENSOR_1 20
#define SYM_NAME 21
#define SYM_DRIVE 22
#define SYM_MOTOR_A 23
#define SYM_FORWARD 24
#define SYM_MOTOR_C 25
#define SYM_WAIT 26


#ifdef DECL_RETE_NETWORK

static struct beta_node betas[];

static struct alpha_node alphas[] = {
  { /* 0 (0x8073520) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 25),
    DECLARE_NIL_SYMBOL,
    &alphas[1], &betas[29], 0 },
  { /* 1 (0x8073490) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 23),
    DECLARE_NIL_SYMBOL,
    &alphas[2], &betas[27], 0 },
  { /* 2 (0x806c7c0) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 13),
    DECLARE_NIL_SYMBOL,
    &alphas[3], &betas[25], 0 },
  { /* 3 (0x806af58) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 12),
    DECLARE_NIL_SYMBOL,
    &alphas[4], &betas[3], 0 },
  { /* 4 (0x806aad8) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 20),
    DECLARE_NIL_SYMBOL,
    &alphas[5], &betas[9], 0 },
  { /* 5 (0x8071e00) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 6),
    DECLARE_NIL_SYMBOL,
    0, &betas[23], 0 },
  { /* 6 (0x806ca80) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 21),
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 26),
    &alphas[7], &betas[36], 0 },
  { /* 7 (0x805a558) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 21),
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 22),
    &alphas[8], &betas[34], 0 },
  { /* 8 (0x8071de0) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 16),
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 9),
    0, &betas[4], 0 },
  { /* 9 (0x806cbf8) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 12),
    DECLARE_NIL_SYMBOL,
    &alphas[10], &betas[32], 0 },
  { /* 10 (0x806ab30) */
    DECLARE_NIL_SYMBOL,
    DECLARE_SYMBOL(symbol_type_symbolic_constant, 5),
    DECLARE_NIL_SYMBOL,
    0, &betas[10], 0 },
};

static struct beta_test tests[] = {
  { /* 0 (0x806c8c0) */
    test_type_goal_id, relational_type_constant, field_id,
    { SYMBOL_TO_WORD(symbol_type_identifier, 0) }, 0 },
  { /* 1 (0x806af48) */
    test_type_goal_id, relational_type_constant, field_id,
    { SYMBOL_TO_WORD(symbol_type_identifier, 0) }, 0 },
  { /* 2 (0x806d128) */
    test_type_goal_id, relational_type_constant, field_id,
    { SYMBOL_TO_WORD(symbol_type_identifier, 0) }, 0 },
  { /* 3 (0x806ce70) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_id, 1) }, 0 },
  { /* 4 (0x806cee0) */
    test_type_greater, relational_type_constant, field_value,
    { SYMBOL_TO_WORD(symbol_type_integer_constant, 512) }, 0 },
  { /* 5 (0x806ab20) */
    test_type_equality, relational_type_variable, field_value,
    { VARIABLE_BINDING_TO_WORD(field_id, 1) }, 0 },
  { /* 6 (0x806cef0) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 2) }, 0 },
  { /* 7 (0x806c950) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 1) }, 0 },
  { /* 8 (0x806afa0) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 1) }, 0 },
  { /* 9 (0x806abc0) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_id, 2) }, 0 },
  { /* 10 (0x806ac30) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 1) }, 0 },
  { /* 11 (0x806cce8) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_id, 2) }, 0 },
  { /* 12 (0x80733e8) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 1) }, 0 },
  { /* 13 (0x8073458) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 1) }, 0 },
  { /* 14 (0x80734e8) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 2) }, 0 },
  { /* 15 (0x8073778) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_id, 1) }, 0 },
  { /* 16 (0x80737d8) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 2) }, 0 },
  { /* 17 (0x80737e8) */
    test_type_equality, relational_type_variable, field_id,
    { VARIABLE_BINDING_TO_WORD(field_value, 2) }, 0 },
};

static struct action actions[] = {
  { /* 0 (0x806cb00) */
    &actions[1], preference_type_acceptable,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_id, 0) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 12) } },
    { rhs_value_type_unbound_variable, { 0 } },
    { 0, { 0 } } },
  { /* 1 (0x806cb58) */
    0, preference_type_acceptable,
    { rhs_value_type_unbound_variable, { 0 } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 21) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 26) } },
    { 0, { 0 } } },
  { /* 2 (0x806d050) */
    &actions[3], preference_type_acceptable,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_id, 3) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 12) } },
    { rhs_value_type_unbound_variable, { 0 } },
    { 0, { 0 } } },
  { /* 3 (0x806d0d0) */
    0, preference_type_acceptable,
    { rhs_value_type_unbound_variable, { 0 } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 21) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 22) } },
    { 0, { 0 } } },
  { /* 4 (0x806c988) */
    0, preference_type_reconsider,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_id, 1) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 12) } },
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 1) } },
    { 0, { 0 } } },
  { /* 5 (0x806ad90) */
    &actions[6], preference_type_acceptable,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 0) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 23) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 24) } },
    { 0, { 0 } } },
  { /* 6 (0x806aef0) */
    0, preference_type_acceptable,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 0) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 25) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 24) } },
    { 0, { 0 } } },
  { /* 7 (0x8073658) */
    0, preference_type_reconsider,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_id, 1) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 12) } },
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 1) } },
    { 0, { 0 } } },
  { /* 8 (0x806c920) */
    &actions[9], preference_type_reject,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 2) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 23) } },
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 1) } },
    { 0, { 0 } } },
  { /* 9 (0x806ca28) */
    0, preference_type_reject,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 2) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 25) } },
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 0) } },
    { 0, { 0 } } },
  { /* 10 (0x8073858) */
    0, preference_type_better,
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_id, 3) } },
    { rhs_value_type_symbol, { SYMBOL_TO_WORD(symbol_type_symbolic_constant, 12) } },
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 3) } },
    { rhs_value_type_variable_binding, { VARIABLE_BINDING_TO_WORD(field_value, 2) } } },
};

static struct production productions[] = {
  { /* 0 (0x806ca08) */
#ifdef DEBUG
    "propose*wait",
#endif
    0, &actions[0], 0, 1, support_type_isupport },
  { /* 1 (0x8055230) */
#ifdef DEBUG
    "propose*drive",
#endif
    0, &actions[2], 0, 1, support_type_isupport },
  { /* 2 (0x806c8a0) */
#ifdef DEBUG
    "drive*reconsider",
#endif
    0, &actions[4], 0, 0, support_type_osupport },
  { /* 3 (0x806aba0) */
#ifdef DEBUG
    "implement*drive",
#endif
    0, &actions[5], 0, 0, support_type_osupport },
  { /* 4 (0x806cc48) */
#ifdef DEBUG
    "reconsider*wait",
#endif
    0, &actions[7], 0, 0, support_type_osupport },
  { /* 5 (0x806cc80) */
#ifdef DEBUG
    "implement*wait",
#endif
    0, &actions[8], 0, 0, support_type_osupport },
  { /* 6 (0x806cbd8) */
#ifdef DEBUG
    "prefer*drive-to-wait",
#endif
    0, &actions[10], 0, 0, support_type_isupport },
};

static struct agent agent;

static struct beta_node betas[] = {
  { /* 0 (0x8058778) */
    beta_node_type_root,
    0, 0, &betas[1], 
    0, 0,
    &agent.root_token, 0, { 0 } },
  { /* 1 (0x806d138) */
    beta_node_type_memory,
    &betas[0], 0, &betas[2], 
    0, 0,
    0, 0, { 0 } },
  { /* 2 (0x8073750) */
    beta_node_type_positive_join,
    &betas[1], &betas[3], &betas[31], 
    &alphas[9], 0,
    0, 0, { &tests[0] } },
  { /* 3 (0x806af78) */
    beta_node_type_positive_join,
    &betas[1], &betas[4], &betas[12], 
    &alphas[3], 0,
    0, 0, { &tests[1] } },
  { /* 4 (0x806ce38) */
    beta_node_type_positive_join,
    &betas[1], 0, &betas[5], 
    &alphas[8], 0,
    0, 0, { &tests[2] } },
  { /* 5 (0x806cbb0) */
    beta_node_type_production,
    &betas[4], &betas[6], 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[0] } },
  { /* 6 (0x806ce80) */
    beta_node_type_memory,
    &betas[4], 0, &betas[7], 
    0, 0,
    0, 0, { 0 } },
  { /* 7 (0x806cea8) */
    beta_node_type_positive_join,
    &betas[6], 0, &betas[8], 
    &alphas[5], 0,
    0, 0, { &tests[3] } },
  { /* 8 (0x806aab0) */
    beta_node_type_memory,
    &betas[7], 0, &betas[9], 
    0, 0,
    0, 0, { 0 } },
  { /* 9 (0x806aaf8) */
    beta_node_type_positive_join,
    &betas[8], 0, &betas[10], 
    &alphas[4], 0,
    0, 0, { &tests[4] } },
  { /* 10 (0x806ab50) */
    beta_node_type_negative,
    &betas[9], 0, &betas[11], 
    &alphas[10], 0,
    0, 0, { &tests[5] } },
  { /* 11 (0x806ab78) */
    beta_node_type_production,
    &betas[10], 0, 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[1] } },
  { /* 12 (0x805a530) */
    beta_node_type_memory,
    &betas[3], 0, &betas[13], 
    0, 0,
    0, 0, { 0 } },
  { /* 13 (0x806cca0) */
    beta_node_type_positive_join,
    &betas[12], &betas[14], &betas[21], 
    &alphas[6], 0,
    0, 0, { &tests[7] } },
  { /* 14 (0x805a578) */
    beta_node_type_positive_join,
    &betas[12], 0, &betas[15], 
    &alphas[7], 0,
    0, 0, { &tests[8] } },
  { /* 15 (0x806c9e0) */
    beta_node_type_production,
    &betas[14], &betas[16], 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[2] } },
  { /* 16 (0x806abd0) */
    beta_node_type_memory,
    &betas[14], 0, &betas[17], 
    0, 0,
    0, 0, { 0 } },
  { /* 17 (0x806abf8) */
    beta_node_type_positive_join,
    &betas[16], 0, &betas[18], 
    &alphas[5], &betas[7],
    0, 0, { &tests[9] } },
  { /* 18 (0x806ac40) */
    beta_node_type_memory,
    &betas[17], 0, &betas[19], 
    0, 0,
    0, 0, { 0 } },
  { /* 19 (0x806c7e0) */
    beta_node_type_positive_join,
    &betas[18], 0, &betas[20], 
    &alphas[2], 0,
    0, 0, { &tests[10] } },
  { /* 20 (0x806c808) */
    beta_node_type_production,
    &betas[19], 0, 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[3] } },
  { /* 21 (0x8073590) */
    beta_node_type_production,
    &betas[13], &betas[22], 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[4] } },
  { /* 22 (0x806caa0) */
    beta_node_type_memory,
    &betas[13], 0, &betas[23], 
    0, 0,
    0, 0, { 0 } },
  { /* 23 (0x80733b0) */
    beta_node_type_positive_join,
    &betas[22], 0, &betas[24], 
    &alphas[5], &betas[17],
    0, 0, { &tests[11] } },
  { /* 24 (0x80733f8) */
    beta_node_type_memory,
    &betas[23], 0, &betas[25], 
    0, 0,
    0, 0, { 0 } },
  { /* 25 (0x8073420) */
    beta_node_type_positive_join,
    &betas[24], 0, &betas[26], 
    &alphas[2], &betas[19],
    0, 0, { &tests[12] } },
  { /* 26 (0x8073468) */
    beta_node_type_memory,
    &betas[25], 0, &betas[27], 
    0, 0,
    0, 0, { 0 } },
  { /* 27 (0x80734b0) */
    beta_node_type_positive_join,
    &betas[26], 0, &betas[28], 
    &alphas[1], 0,
    0, 0, { &tests[13] } },
  { /* 28 (0x80734f8) */
    beta_node_type_memory,
    &betas[27], 0, &betas[29], 
    0, 0,
    0, 0, { 0 } },
  { /* 29 (0x8073540) */
    beta_node_type_positive_join,
    &betas[28], 0, &betas[30], 
    &alphas[0], 0,
    0, 0, { &tests[14] } },
  { /* 30 (0x8073568) */
    beta_node_type_production,
    &betas[29], 0, 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[5] } },
  { /* 31 (0x8073788) */
    beta_node_type_memory,
    &betas[2], 0, &betas[32], 
    0, 0,
    0, 0, { 0 } },
  { /* 32 (0x80737b0) */
    beta_node_type_positive_join,
    &betas[31], 0, &betas[33], 
    &alphas[9], &betas[2],
    0, 0, { &tests[15] } },
  { /* 33 (0x80738b0) */
    beta_node_type_memory,
    &betas[32], 0, &betas[34], 
    0, 0,
    0, 0, { 0 } },
  { /* 34 (0x80738d8) */
    beta_node_type_positive_join,
    &betas[33], 0, &betas[35], 
    &alphas[7], &betas[14],
    0, 0, { &tests[16] } },
  { /* 35 (0x8073900) */
    beta_node_type_memory,
    &betas[34], 0, &betas[36], 
    0, 0,
    0, 0, { 0 } },
  { /* 36 (0x8073928) */
    beta_node_type_positive_join,
    &betas[35], 0, &betas[37], 
    &alphas[6], &betas[13],
    0, 0, { &tests[17] } },
  { /* 37 (0x8073950) */
    beta_node_type_production,
    &betas[36], 0, 0, 
    0, 0,
    0, 0, { (struct beta_test *) &productions[6] } },
};

static struct agent agent = {
  1, &betas[0], { &betas[0], 0, 0, 0 },
  { 0,
    0,
    &alphas[0],
    &alphas[6],
    0,
    0,
    0,
    0,
    0,
    0,
    &alphas[9],
    0,
    0,
    0,
    0,
    0 },
  0, 0, 0, { 0, 0, 0, 0 }, 0 };

#endif /* DECL_RETE_NETWORK */
