#ifndef MY_HEADER_H										// Only defines the header file if not defined
	#define MY_HEADER_H									// Header file defined only once 
	// User defined functions are declared here
	int add(int a, int b);
	int subtract(int a, int b);

	int add(int a, int b)
	{
		int sum = a + b;
		return(sum);
	}

	int subtract(int a, int b)
	{
		int difference = a - b;
		return(difference);
	}

#endif