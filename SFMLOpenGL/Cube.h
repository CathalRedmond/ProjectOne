#ifndef CUBE_H
#define CUBE_H

#include <gl/glew.h>

//Cube Vertices
/*
		  (-1.0f, 1.0f, -1.0f)          (1.0f, 1.0f, -1.0f)
		          [7]                          [6]
		          #-----------------------------#
		         /|                            /|
		        / |                           / |
	  (-1.0f, 1.0f, 1.0f)           (1.0f, 1.0f, 1.0f)
		  [3] /                         [2] /
		     #-----------------------------#    |
		     |    |                        |    |
		     |    |                        |    |
		     |   [4]                       |   [5]
		  (-1.0f, -1.0f, -1.0f)         (1.0f, -1.0f, -1.0f)
		     |    #-----------------------------#
		     |   /                         |   /
		     |  /                          |  /
		     | /                           | /
		     |/                            |/
		     #-----------------------------#
		    [0]                           [1]
	(-1.0f, -1.0f, 1.0f)         (1.0f, -1.0f, 1.0f)
*/

const int VERTICES	= 24;	// Total Number of Vertices
const int INDICES	= 12;	// Total Number of Indexes
const int UVS		= 44;	// Total Number of UVs
const int COLORS	= 24;	// Total Number of Colors



static const GLfloat npcVertices[] =
{
		// Front Face
	-1.00f, -1.00f,  1.00f,	// [0]	// ( 0)
	 1.00f, -1.00f,  1.00f,	// [1]	// ( 1)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 2)
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 3)

	// Top Face
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 4)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 5)
	 1.00f,  1.00f, -1.00f,	// [6]	// ( 6)
	-1.00f,  1.00f, -1.00f,	// [7]	// ( 7)

	// Back Face
	 1.00f, -1.00f, -1.00f,	// [5]	// ( 8)
	-1.00f, -1.00f, -1.00f, // [4]	// ( 9)
	-1.00f,  1.00f, -1.00f,	// [7]	// (10)
	 1.00f,  1.00f, -1.00f,	// [6]	// (11)

	// Bottom Face
	-1.00f, -1.00f, -1.00f, // [4]	// (12)
	 1.00f, -1.00f, -1.00f, // [5]	// (13)
	 1.00f, -1.00f,  1.00f, // [1]	// (14)
	-1.00f, -1.00f,  1.00f, // [0]	// (15)

	// Left Face
	-1.00f, -1.00f, -1.00f, // [4]	// (16)
	-1.00f, -1.00f,  1.00f, // [0]	// (17)
	-1.00f,  1.00f,  1.00f, // [3]	// (18)
	-1.00f,  1.00f, -1.00f, // [7]	// (19)

	// Right Face
	 1.00f, -1.00f,  1.00f, // [1]	// (20)
	 1.00f, -1.00f, -1.00f, // [5]	// (21)
	 1.00f,  1.00f, -1.00f, // [6]	// (22)
	 1.00f,  1.00f,  1.00f, // [2]	// (23)
};



static const GLfloat playerVertices[] =
{
		// Front Face
	-0.50f, -0.50f, 0.50f,	// [0]	// ( 0)
	0.50f, -0.50f,  0.50f,	// [1]	// ( 1)
	0.50f,  0.50f,  0.50f,	// [2]	// ( 2)
	-0.50f, 0.50f,  0.50f,	// [3]	// ( 3)

	// Top Face
	-0.50f,  0.50f,  0.50f,	// [3]	// ( 4)
	0.50f,  0.50f,  0.50f,	// [2]	// ( 5)
	0.50f,  0.50f, -0.50f,	// [6]	// ( 6)
	-0.50f,  0.50f, -0.50f,	// [7]	// ( 7)

	// Back Face
	0.50f, -0.50f, -0.50f,	// [5]	// ( 8)
	-0.50f, -0.50f, -0.50f, // [4]	// ( 9)
	-0.50f,  0.50f, -0.50f,	// [7]	// (10)
	0.50f,  0.50f, -0.50f,	// [6]	// (11)

	// Bottom Face
	-0.50f, -0.50f, -0.50f, // [4]	// (12)
	0.50f, -0.50f, -0.50f, // [5]	// (13)
	0.50f, -0.50f,  0.50f, // [1]	// (14)
	-0.50f, -0.50f,  0.50f, // [0]	// (15)

	// Left Face
	-0.50f, -0.50f, -0.50f, // [4]	// (16)
	-0.50f, -0.50f,  0.50f, // [0]	// (17)
	-0.50f,  0.50f,  0.50f, // [3]	// (18)
	-0.50f,  0.50f, -0.50f, // [7]	// (19)

	// Right Face
	0.50f, -0.50f,  0.50f, // [1]	// (20)
	0.50f, -0.50f, -0.50f, // [5]	// (21)
	0.50f,  0.50f, -0.50f, // [6]	// (22)
	0.50f,  0.50f,  0.50f, // [2]	// (23)
};




static const GLfloat greenColors[] = {
	
	// Front Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Top Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Back Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Bottom Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Left Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Right Face
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)
};

static const GLfloat blueColors[] = {
	
	// Front Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 4)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (6)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)
	// Top Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 4)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (6)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)
	// Back Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 4)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (6)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	// Bottom Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 4)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (6)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	// Left Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 4)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (6)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	// Right Face
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 4)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (6)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)
};

static const GLfloat redColors[] = {
	
	// Front Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Top Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Back Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Bottom Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Left Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Right Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)
};

GLfloat uvs1[2 * 4 * 6] = {
	// Front Face (other faces populated in initialisation)
	0.0, 0.5,
	0.33, 0.5,
	0.33, 1.0,
	0.0, 1.0,
	
	// Top Face
	0.33, 0.5,
	0.66, 0.5,
	0.66, 1.0,
	0.33, 1.0,
	
	// Back Face
	0.66, 0.5,
	1.0, 0.5,
	1.0, 1.0,
	0.66, 1.0,
	
	// Bottom Face
	0.0, 0.0,
	0.33, 0.0,
	0.33, 0.5,
	0.0, 0.5,
	
	// Left Face
	0.33, 0.0,
	0.66, 0.0,
	0.66, 0.5,
	0.33, 0.5,
	
	// Right Face
	0.66, 0.0,
	1.0, 0.0,
	1.0, 0.5,
	0.66, 0.5,
};

GLfloat uvs2[2 * 4 * 6] = {
	// Bottom Face
	0.0, 0.0,
	0.33, 0.0,
	0.33, 0.5,
	0.0, 0.5,

	// Left Face
	0.33, 0.0,
	0.66, 0.0,
	0.66, 0.5,
	0.33, 0.5,

	// Right Face
	0.66, 0.0,
	1.0, 0.0,
	1.0, 0.5,
	0.66, 0.5,
	
	// Front Face (other faces populated in initialisation)
	0.0, 0.5,
	0.33, 0.5,
	0.33, 1.0,
	0.0, 1.0,

	// Top Face
	0.33, 0.5,
	0.66, 0.5,
	0.66, 1.0,
	0.33, 1.0,

	// Back Face
	0.66, 0.5,
	1.0, 0.5,
	1.0, 1.0,
	0.66, 1.0,


};

GLfloat uvs3[2 * 4 * 6] = {
	
	// Back Face
	0.66, 0.5,
	1.0, 0.5,
	1.0, 1.0,
	0.66, 1.0,

	// Bottom Face
	0.0, 0.0,
	0.33, 0.0,
	0.33, 0.5,
	0.0, 0.5,

	// Front Face (other faces populated in initialisation)
	0.0, 0.5,
	0.33, 0.5,
	0.33, 1.0,
	0.0, 1.0,

	// Top Face
	0.33, 0.5,
	0.66, 0.5,
	0.66, 1.0,
	0.33, 1.0,



	// Left Face
	0.33, 0.0,
	0.66, 0.0,
	0.66, 0.5,
	0.33, 0.5,

	// Right Face
	0.66, 0.0,
	1.0, 0.0,
	1.0, 0.5,
	0.66, 0.5,
};

static const GLuint indices[] =
{
	// Front Face
	0, 1, 2,
	2, 3, 0,

	// Top Face
	4, 5, 6,
	6, 7, 4,

	// Back Face
	8, 9, 10,
	10, 11, 8,

	// Bottom Face
	12, 13, 14,
	14, 15, 12,

	// Left Face
	16, 17, 18,
	18, 19, 16,

	// Right Face
	20, 21, 22,
	22, 23, 20
};



#endif

