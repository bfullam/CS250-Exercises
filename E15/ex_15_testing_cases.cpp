	/********************************************
	* Create an array of integers by asking		*
	*   the user to enter integers.				*
	********************************************/
	
	//Ask the user to enter the capacity			
	cout << "Enter the capacity of the array: ";
	int intCap;
	cin >> intCap;

	DArray<int> intArray(intCap);

	//Ask the user to enter values for the array
	cout << "\nEnter positive numbers "
		<< "(enter -1 to quit):" << endl;
	int n;
	cin >> n;
	while(n != -1)
	{
		intArray.addElement(n);
		cin >> n;
	}

	//Print array
	int usedInt = intArray.getNumberUsed();
	cout << "Array of integers: ";
	for (int i = 0; i < usedInt; ++i)
		cout << intArray.getElementAt(i) << " ";
	cout << endl;

	/********************************************
	* Create an array of doubles by asking		*
	*   the user to enter doubles.				*
	********************************************/
	
	//Ask the user to enter the capacity			
	cout << "\nEnter the capacity of the array: ";
	int doubleCap;
	cin >> doubleCap;

	DArray<double> doubleArray(doubleCap);

	//Ask the user to enter values for the array
	cout << "\nEnter positive decimal numbers "
		<< "(enter -1 to quit):" << endl;
	double d;
	cin >> d;
	while(d != -1)
	{
		doubleArray.addElement(d);
		cin >> d;
	}

	//Print array
	int usedDoubles = doubleArray.getNumberUsed();
	cout << "Array of doubles: ";
	for (int i = 0; i < usedDoubles; ++i)
		cout << doubleArray.getElementAt(i) << " ";
	cout << endl;

	/********************************************
	* Create an array of strings by asking		*
	*   the user to enter strings.				*
	********************************************/
	
	//Ask the user to enter the capacity			
	cout << "\nEnter the capacity of the array: ";
	int stringCap;
	cin >> stringCap;

	DArray<string> stringArray(stringCap);

	//Ask the user to enter values for the array
	cout << "\nEnter words "
		<< "(enter -1 to quit):" << endl;
	string s;
	cin >> s;
	while(s != "-1")
	{
		stringArray.addElement(s);
		cin >> s;
	}

	//Print array
	int usedStrings = stringArray.getNumberUsed();
	cout << "Array of strings: " ;
	for (int i = 0; i < usedStrings; ++i)
		cout << stringArray.getElementAt(i) << " ";
	cout << endl;

	/********************************************
	* Create an array of objects of type		*
	*	Student. Ask the user to enter data.	*
	* Print the array using the overloaded		*
	*   operator[]								*
	********************************************/

	//Ask the user to enter the capacity			
	cout << "\nEnter the capacity of the array: ";
	int objectCap;
	cin >> objectCap;

	DArray<Student> objectArray(objectCap);
	//Ask the user to enter values for the array
	int i = 0;
	char answer = 'y';
	int id = 0;
	string major;

	while (answer == 'y')
	{
		cout << "\nEnter student id and major " << endl;
		cin >> id >> major;

		Student st(id,major);

		objectArray.addElement(st);

		++i;
		
		if (i < objectCap)
		{
			cout << "\nAnother student (y/n)? ";
			cin >> answer;
		}
		else
		{
			answer = 'n';
		}
		
	}

	//Print array
	int usedArray = objectArray.getNumberUsed();
	cout << "\nArray of objects:\n" ;
	for (int i = 0; i < usedArray; ++i)
		(objectArray.getElementAt(i)).print();