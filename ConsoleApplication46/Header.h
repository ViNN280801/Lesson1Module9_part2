struct Hockey {
	char surname[11];
	int age;
	int countGames;
	int goals;
};
void infoHockey();
struct market {
	char name[10];
	char proizvoditel[10];
	int yearOfProduct;
	int count[10];
	int price;
};
void MARKET();
void MARKET2();
struct DoB {
	int day;
	int month;
	int year;
};
struct worker {
	char surname[12];
	DoB DateOfBirth;
	char post[12];
	int salary;
	char education[12];
};
void WORKER();
struct student {
	char surname[12];
	char group[12];
	DoB DateOfBirth;
	int assessmentPhysics;
	int assessmentMath;
	int assessmentInfo;
};
void STUDENT();
struct computer {
	char name[6];
	int frequently;
	int capacity;
	int available;
	int price[6];
};
void COMPUTER();
void COMPUTER2();
struct PHIS {
	char surname[12];
	char group[12];
	DoB DateOfBirth;
	int assessmentPhysics[12];
};
struct computer3 {
	char name[6];
	int frequently;
	int capacity;
	int available[6];
	int price[6];
};
void physics();
void MARKET3();
void COMPUTER3();