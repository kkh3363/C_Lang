#include <stdio.h>
#include <string.h>
#define MAX 100

#define DATA_FILE "data.txt"
typedef struct {
    char name[50];
    char phone[20];
} Contact;

void saveFile();

Contact contacts[MAX];
// index to input new user.
int count = 0;

int getMenu(){
	int menu;
	printf("\n===== My Phone book =====\n");
    printf("1. Insert new name\n");
	printf("2. list of all\n");
	printf("3. Search phone number by name\n");
	printf("0. Exit\n");
    printf("Select menu number: ");
    scanf("%d", &menu);

	return menu;
}

// insert new user
void addContact() {
    if (count >= MAX) {
        printf("Error: over storage.\n");
        return;
    }

    printf("Name : ");
    scanf("%s", contacts[count].name);

    printf("Phone Number: ");
    scanf("%s", contacts[count].phone);

    count++;
    printf("Success New user.\n");
	saveFile();
}

// list of phone book
void printContacts() {
	int i;
    if (count == 0) {
        printf("List is Empty.\n");
        return;
    }
	printf("\n=== List of Phone book ===\n");
	for(  i=0; i < count; i++) {
		printf("%d. Name: %s / Phone-#: %s\n",  i + 1,contacts[i].name,  contacts[i].phone);
	}
}

// search phone num by name
void searchContact() {
    char searchName[50];
    int found = 0;
	int i;
    printf("Enter the name to search for: ");
    scanf("%s", searchName);

    for ( i = 0; i < count ; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
			printf("=========================\n");
            printf("Found result:\n");
            printf("name: %s\n", contacts[i].name);
			printf("phone-#: %s\n", contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("I'm sorry. \n");
    }
}
void saveFile(){
	FILE* fpw;
	int i;
	fpw = fopen( DATA_FILE ,"w");
	for (i=0; i < count; i++)
		fprintf(fpw,"%s,%s\n", contacts[i].name, contacts[i].phone);

	fclose(fpw);
}
void readFile(){
	FILE* fpr ;
	if ( (fpr = fopen(DATA_FILE, "r")) == NULL  ) 
		return;

	while (!feof(fpr))
	{
		char strIn[100] =  {0,};
		if ( fgets( strIn, sizeof(strIn), fpr) != NULL){
			char *token= strtok(strIn,",");
			strcpy( contacts[count].name, token );
			token = strtok(NULL, ",");
			strcpy( contacts[count].phone, token );
			contacts[count].phone[ strlen(contacts[count].phone)-1] = '\0';
			count++;
		}
		
	}
}
int main(){
	int menu;
	readFile();
	do {
		menu = getMenu();
		switch (menu) {
            case 1:    addContact(); break;
            case 2:   printContacts(); break;
            case 3:   searchContact(); break;
            case 0:
                printf("Have a nice Day\n");
                return 0;
            default:
                printf("Ooops. incorrect menu\n");
        }
	} while(1);
	return 0;
		
}
