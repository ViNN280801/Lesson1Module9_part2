#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Header.h"
void infoHockey()
{
	Hockey *hockey;

	hockey = (Hockey*)malloc(sizeof(Hockey));

	for (short int i = 0; i < 11; i++)
	{
		hockey->surname[i] = 95 + rand() % 25;
		hockey->age = 20 + rand() % 40;
		hockey->countGames = 0 + rand() % 35;
		hockey->goals = 0 + rand() % 20;
	}

	for (short int i = 0; i < 11; i++)
	{
		printf("--- --- --- The %d player --- --- --- \n\n", i);
		printf("Surname -%s\n", hockey->surname);
		printf("Age - %d\n", hockey->age);
		printf("Count games - %d\n", hockey->countGames);
		printf("Count goals - %d\n\n", hockey->goals);
	}

	for (short int i = 0; i < 11; i++)
	{
		if (hockey->age < 25)
		{
			printf("////////////***\\\\\\\\\\\\\n\n");
			printf("Hockey players, which age lower than 25 years: ");
			printf("%d\n\n", i);
		}
		else
			printf("Nobody hasn't age lower than 25.\n");
	}

}
void MARKET()
{
	market *st;
	st = (market*)malloc(sizeof(market));

	int sum = 0, counter = 0;
	for (short int i = 0; i < 10; i++)
	{
		st->proizvoditel[i] = 97 + rand() % 24;
		st->yearOfProduct = 1940 + rand() % 78;
		st->count[i] = 1 + rand() % 99;
		st->price = 1 + rand() % 200;
	}

	for (short int i = 0; i < 10; i++)
	{
		printf("--- --- --- The %d product --- --- --- \n", i);
		printf("Fabricator: %s\n", st->proizvoditel);
		printf("Year of produce - %d\n", st->yearOfProduct);
		printf("Count: %d\n", st->count[i]);
		printf("Price - %d$\n", st->price);
		printf("--- --- --- --- --- --- --- \n\n");
	}

	for (short int i = 0; i < 10; i++)
		if (st->count[i] < st->count[i + 1])
			counter = st->count[i + 1];
	printf("The most of the amount is - %d\n", counter);
}
void MARKET2()
{
	market *st;
	st = (market*)malloc(sizeof(market));

	for (short int i = 0; i < 10; i++)
	{
		st->name[i] = 97 + rand() % 24;
		st->proizvoditel[i] = 97 + rand() % 24;
		st->yearOfProduct = 1940 + rand() % 78;
		st->count[i] = 1 + rand() % 99;
		st->price = 1 + rand() % 200;
	}

	int max = st->price;
	for (short int i = 0; i < 10; i++)
	{
		printf("--- --- --- The %d product --- --- --- \n", i);
		printf("Name: %s\n", st->name);
		printf("Fabricator: %s\n", st->proizvoditel);
		printf("Year of produce - %d\n", st->yearOfProduct);
		printf("Count: %d\n", st->count[i]);
		printf("Price - %d$\n", st->price);
		printf("--- --- --- --- --- --- --- \n\n");
	}

	for (short int i = 0; i < 10; i++)
	{
		if (max >= st->price)
		{
			max = st->price;
			printf("\n\n");
			printf("Max price - %d$\n", max);
			printf("--- --- --- The %d product --- --- --- \n", i);
			printf("Name: %s\n", st->name);
			printf("Fabricator: %s\n", st->proizvoditel);
			printf("Year of produce - %d\n", st->yearOfProduct);
			printf("Count: %d\n", st->count[i]);
			printf("Price - %d$\n", st->price);
			printf("--- --- --- --- --- --- --- \n\n");
		}
	}
}
void WORKER()
{
	worker *st;
	st = (worker*)malloc(sizeof(worker));

	int age[12];
	for (short int i = 0; i < 12; i++)
	{
		st->surname[i] = 97 + rand() % 24;
		st->DateOfBirth.day = 1 + rand() % 31;
		st->DateOfBirth.month = 1 + rand() % 12;
		st->DateOfBirth.year = 1940 + rand() % 60;
		st->post[i] = 97 + rand() % 24;
		st->salary = 1000 + rand() % 59000;
		st->education[i] = 97 + rand() % 24;
	}

	for (short int i = 0; i < 12; i++)
	{
		printf("--- --- --- The %d worker --- --- --- \n", i);
		printf("Surname: %s\n", st->surname);
		printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
		printf("Post: %s\n", st->post);
		printf("Salary: %d$\n", st->salary);
		printf("Education: %s\n", st->education);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 12; i++)
	{
		if (st->DateOfBirth.year > 60)
		{
			age[i] = 2018 - st->DateOfBirth.year;
			printf("Worker, which age is more than 60 - %s.\n", st->surname);
			printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
			printf("Post: %s\n", st->post);
			printf("Salary: %d$\n", st->salary);
			printf("Education: %s\n", st->education);
			printf("--- --- --- --- --- --- ---\n\n");
		}
	}
}
void STUDENT()
{
	student *st;
	st = (student*)malloc(sizeof(student));

	int counter = 0, age[12];
	for (short int i = 0; i < 12; i++)
	{
		st->surname[i] = 97 + rand() % 24;
		st->group[i] = 97 + rand() % 24;
		st->DateOfBirth.day = 1 + rand() % 31;
		st->DateOfBirth.month = 1 + rand() % 12;
		st->DateOfBirth.year = 1980 + rand() % 20;
		st->assessmentPhysics = 1 + rand() % 100;
		st->assessmentMath = 1 + rand() % 100;
		st->assessmentInfo = 1 + rand() % 100;
	}

	for (short int i = 0; i < 12; i++)
	{
		printf("--- --- --- The %d student --- --- ---\n", i);
		printf("Surname: %s\n", st->surname);
		printf("Group: %s\n", st->group);
		printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
		printf("Rating in physics: %d\n", st->assessmentPhysics);
		printf("Rating in mathmatics: %d\n", st->assessmentMath);
		printf("Rating in informatics: %d\n", st->assessmentInfo);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 12; i++)
	{
		age[i] = 2018 - st->DateOfBirth.year;
		if (age[i] > 19)
		{
			printf("--- --- --- The %d student --- --- ---\n", i);
			printf("Student, which age is more than 19\n", st->surname);
			printf("Age = %d\n", age[i]);
			printf("Group: %s\n", st->group);
			printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
			printf("Rating in physics: %d\n", st->assessmentPhysics);
			printf("Rating in mathmatics: %d\n", st->assessmentMath);
			printf("Rating in informatics: %d\n", st->assessmentInfo);
			printf("--- --- --- --- --- --- ---\n\n");
		}
	}
}
void COMPUTER()
{
	computer *st;
	st = (computer*)malloc(sizeof(computer));

	for (short int i = 0; i < 6; i++)
	{
		st->name[i] = 94 + rand() % 24;
		st->frequently = 1 + rand() % 4;
		st->capacity = 2 + rand() % 24;
		st->available = -1 + rand() % 2;
		st->price[i] = 100 + rand() % 500;
	}

	for (short int i = 0; i < 6; i++)
	{
		printf("--- --- --- %d computer --- --- ---\n", i);
		printf("Name: %s\n", st->name);
		printf("Frequently: %dGHz\n", st->frequently);
		printf("Capacity: %dGb\n", st->capacity);
		if (st->available == 0)
			printf("DVD-ROM: not available\n");
		else
			printf("DVD-ROM: available\n");
		printf("Price: %d$\n", st->price);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 6; i++)
	{
		if (st->capacity >= 10)
		{
			printf("--- --- --- Computers, which have capacity equally or more than 10Gb --- --- ---\n", i);
			printf("Name: %s\n", st->name);
			printf("Frequently: %dGHz\n", st->frequently);
			printf("Capacity: %dGb\n", st->capacity);
			if (st->available == 0)
				printf("DVD-ROM: not available\n");
			else
				printf("DVD-ROM: available\n");
			printf("Price: %d$\n", st->price);
			printf("--- --- --- --- --- --- ---\n\n");
		}
		else
			printf("We don't have computer, that had qually or more than 10Gb yet.\n");
	}
}
void COMPUTER2()
{
	computer *st;
	st = (computer*)malloc(sizeof(computer));

	for (short int i = 0; i < 6; i++)
	{
		st->name[i] = 94 + rand() % 24;
		st->frequently = 1 + rand() % 4;
		st->capacity = 2 + rand() % 24;
		st->available = -1 + rand() % 2;
		st->price[i] = 100 + rand() % 500;
	}

	int sum = 0, sr = 0;
	for (short int i = 0; i < 6; i++)
	{
		printf("--- --- --- %d computer --- --- ---\n", i);
		printf("Name: %s\n", st->name);
		printf("Frequently: %dGHz\n", st->frequently);
		printf("Capacity: %dGb\n", st->capacity);
		if (st->available == 0)
			printf("DVD-ROM: not available\n");
		else
			printf("DVD-ROM: available\n");
		printf("Price: %d$\n", st->price[i]);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 6; i++)
	{
		if (st->price[i] > st->price[i + 1])
		{
			sum += st->price[i];
			sr = sum / 6;
		}
	}
	printf("Srednee arifm = %d\n\n", sr);
}
void physics()
{
	PHIS *st;
	st = (PHIS*)malloc(sizeof(PHIS));

	int sr = 0;
	int counter = 0, age[12];
	for (short int i = 0; i < 12; i++)
	{
		st->surname[i] = 97 + rand() % 24;
		st->group[i] = 97 + rand() % 24;
		st->DateOfBirth.day = 1 + rand() % 31;
		st->DateOfBirth.month = 1 + rand() % 12;
		st->DateOfBirth.year = 1980 + rand() % 20;
		st->assessmentPhysics[i] = 1 + rand() % 100;
		sr += st->assessmentPhysics[i] / 12;
	}

	for (short int i = 0; i < 12; i++)
	{
		printf("--- --- --- The %d student --- --- ---\n", i);
		printf("Surname: %s\n", st->surname);
		printf("Group: %s\n", st->group);
		printf("Date of birth: %d.%d.%d\n", st->DateOfBirth.day, st->DateOfBirth.month, st->DateOfBirth.year);
		printf("Rating in physics: %d\n", st->assessmentPhysics[i]);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	printf("Srednii rating of all students = %d\n", sr);
}
void MARKET3()
{
	market *st;
	st = (market*)malloc(sizeof(market));

	for (short int i = 0; i < 10; i++)
	{
		st->name[i] = 97 + rand() % 24;
		st->proizvoditel[i] = 97 + rand() % 24;
		st->yearOfProduct = 1940 + rand() % 78;
		st->count[i] = 1 + rand() % 99;
		st->price = 1 + rand() % 200;
	}

	for (short int i = 0; i < 10; i++)
	{
		printf("--- --- --- The %d product --- --- --- \n", i);
		printf("Name: %s\n", st->name);
		printf("Fabricator: %s\n", st->proizvoditel);
		printf("Year of produce - %d\n", st->yearOfProduct);
		printf("Count: %d\n", st->count[i]);
		printf("Price - %d$\n", st->price);
		printf("--- --- --- --- --- --- --- \n\n");
	}

	for (short int i = 0; i < 10; i++)
	{
		if (2018 - st->yearOfProduct <= 2)
		{
			printf("Product, which has produced less than 2 years.\n\n");
			printf("--- --- --- The %d product --- --- --- \n", i);
			printf("Name: %s\n", st->name);
			printf("Fabricator: %s\n", st->proizvoditel);
			printf("Year of produce - %d\n", st->yearOfProduct);
			printf("Count: %d\n", st->count[i]);
			printf("Price - %d$\n", st->price);
			printf("--- --- --- --- --- --- --- \n\n");
		}
	}
}
void COMPUTER3()
{
	computer *st;
	st = (computer*)malloc(sizeof(computer));

	for (short int i = 0; i < 6; i++)
	{
		st->name[i] = 94 + rand() % 24;
		st->frequently = 1 + rand() % 4;
		st->capacity = 2 + rand() % 24;
		st->available = -1 + rand() % 2;
		st->price[i] = 100 + rand() % 500;
	}

	for (short int i = 0; i < 6; i++)
	{
		printf("--- --- --- %d computer --- --- ---\n", i);
		printf("Name: %s\n", st->name);
		printf("Frequently: %dGHz\n", st->frequently);
		printf("Capacity: %dGb\n", st->capacity);
		if (st->available == 0)
			printf("DVD-ROM: not available\n");
		else
			printf("DVD-ROM: available\n");
		printf("Price: %d$\n", st->price[i]);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 6; i++)
	{
		if (st->available == 1)
		{
			printf("--- --- --- %d computer has the DVD-ROM --- --- --- \n", i);
			printf("Name: %s\n", st->name);
			printf("Frequently: %dGHz\n", st->frequently);
			printf("Capacity: %dGb\n", st->capacity);
			if (st->available == 0)
				printf("DVD-ROM: not available\n");
			else
				printf("DVD-ROM: available\n");
			printf("Price: %d$\n", st->price[i]);
			printf("--- --- --- --- --- --- ---\n\n");
		}
		else
			printf("--- --- --- %d computer doesn't has the DVD-ROM --- --- --- \n", i);
	}
}