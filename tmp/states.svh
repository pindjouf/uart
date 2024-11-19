typedef enum reg[2:0] {IDLE, WRITE, SHIFT, CLEAR, START, STOP} state;
/*
`ifndef DEBUG
    `define DEBUG 0
`endif

`ifdef DEBUG
    output logic [2:0] cur_state,
`endif
*/
