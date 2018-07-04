Array Allocation
Arrays get a name, and individual elements accessed using [] operator and an index

Initializing arrays
1. Programmatically
2. With Data: the number of array size and number of elements in {} must match
	eg. int scores[5] = {0,0,0,0,0};
		double data[] = {34.54,123.0,51.1};
		The data inside the {} must be constants instead of variables

Static Size Allocation
1. Arrays in C++ are always statically sized, and the size must be known at compile time
	eg. int size；
		cin >> size；
		double data[size]   This is not allowed

Passing arrays as arguments to functions
1. Arrays can be passed to functions
	In the function definition use type array_name[] or type *array_name
	eg. void my_function(int data*);  OR void function_name(int data[], int size);

C-Strings
1.An array to hold a sequence of characters
	eg. char text[] = "Hello CS103!";
2.C-strings use one byte per character,	
	And they are marked with the NULL character(char value 0) to signify their end
	cin will add the \0 for coders when reading into c-strings
3.When allocating an array for a C-string dont forget the NULL character
	Text inside the double quotes "like this" makes a string constant including the NULL
	When reading from cin to a C-string buffer, make sure the user does not enter too much text
	as cin will write past the end of your buffer

Arrays as look-up tables
1. Look-up table is data structure that performs X -> Y mapping function
	val = Y[X]

Multi-Dimensional arrays
1. 2D arrays are index with two[][]
	eg. int 2d[2][3] = {{10,20,30},{40,50,60}};
2. Passing multidimentional arrays
	Formal parameter: declare name and all dimensions, except the first is optional
3. Linearization of arrays
	Arrays are stored in memory, which is linear.
	We need to convert array[i][j][k] into a linear address
	In C/C++, lower dimensions first to be filled in
4. 2D array = B/W image(256*256) 3D array = color image(256*256*3)
