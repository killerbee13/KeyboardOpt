#include <iostream>
#include <vector>
#include <string>
#include <pair>

#include "FRC.h"
#include "path.h"
#include "keyboard.h"

#include "version.h"

/**********************************************************
 * DESIGN:

 * PRIMARY GOALS:

 * Simulate a 2D screen keyboard by a list of named points
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
 * 
 * 
 * 

 * SECONDARY GOALS:

 * Display current best keymap graphically in the terminal
	(using ncurses) dynamically.
 - OR -
 * Display current best keymap graphically using a simple
	graphics library.
**********************************************************/

int main(int argc, char** argv)
{
  
}

