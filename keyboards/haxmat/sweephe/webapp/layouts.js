window.HE_DEFAULT_LAYOUT = 'sweep_high_he';

window.HE_LAYOUTS = {
    sweep_high_he: {
        id: 'sweep_high_he',
        name: 'Sweep High HE',
        rows: 3,
        cols: 8,
        keymap: [
            // Row 0
            {x: 0, y: 0, hardwareRow: 0, hardwareCol: 4},
            {x: 1, y: 0, hardwareRow: 0, hardwareCol: 6},
            {x: 2, y: 0, hardwareRow: 0, hardwareCol: 2},
            {x: 3, y: 0, hardwareRow: 0, hardwareCol: 3},
            {x: 4, y: 0, hardwareRow: 0, hardwareCol: 5},

            // Row 1
            {x: 0, y: 1, hardwareRow: 0, hardwareCol: 7},
            {x: 1, y: 1, hardwareRow: 1, hardwareCol: 0},
            {x: 2, y: 1, hardwareRow: 1, hardwareCol: 1},
            {x: 3, y: 1, hardwareRow: 1, hardwareCol: 6},
            {x: 4, y: 1, hardwareRow: 1, hardwareCol: 7},

            // Row 2
            {x: 0, y: 2, hardwareRow: 1, hardwareCol: 5},
            {x: 1, y: 2, hardwareRow: 2, hardwareCol: 6},
            {x: 2, y: 2, hardwareRow: 2, hardwareCol: 4},
            {x: 3, y: 2, hardwareRow: 2, hardwareCol: 2},
            {x: 4, y: 2, hardwareRow: 2, hardwareCol: 3},

            // Row 3 (Thumbs)
            {x: 3, y: 3, thumb: true, hardwareRow: 2, hardwareCol: 7},
            {x: 4, y: 3, thumb: true, hardwareRow: 2, hardwareCol: 5}
        ]
    }
};
