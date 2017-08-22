# KeyboardOpt
Evolutionary optimization of QWERTY-derived keymaps for trace-based touchscreen keyboard.

(from `main.cpp`)
# Design:

## Primary Goals:

 * Simulate a 2D screen keyboard by a set of named points
	representing keys.
 * Simulate a trace by creating nodes at keys and
	calculating the angles between incoming and outgoing
	lines of a node.
 * Ambiguity of a trace is represented by how straight
	the angles of each node are, as well as how close
	to adjacent each key is.
 * Ambiguity of a keymap is represented by the weighted sum
	of the ambiguities of all words (in count_1w.txt).
 * Use evolutionary algorithm to produce the best keymap.
 * Define a compact human-readable text format to
	represent keymaps.

## Secondary Goals:

 * Display current best keymap graphically in the terminal
	(using ncurses) dynamically.
 * And/or:
 * Display current best keymap graphically using a simple
	graphics library.

