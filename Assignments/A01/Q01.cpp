/* Programmer:Muhammad Ali 23K-0052
* Date: 26/02/24
* Descrption:pet and adopter
*/

#include <iostream>
#include <vector>

using namespace std;

class Pet
{
private:

    string healthStatus,name;
    int hungerLevel, happinessLevel; 
    vector<string> specialSkills;
    
public:
    //contructor
    Pet(const string& healthStatus, const string& name, int hungerLevel, int happinessLevel, const vector<string>& specialSkills)
        : healthStatus(healthStatus), name(name), hungerLevel(hungerLevel), happinessLevel(happinessLevel), specialSkills(specialSkills) {}
    
    void displayPetDetails(){

        cout << "Name: " << this->name << endl;
        cout << "Hunger level: " << this-> hungerLevel << endl;
        cout << "Happiness level: " << this-> happinessLevel << endl;
        cout << "Special Skills: " << endl;
        for(string skill : specialSkills) cout << skill << endl;
        cout << endl;
         
    }

    void updateHappiness(int play){//assuming each time pet is played with it recives +1 play
        
        if (this->happinessLevel == 10) this->happinessLevel = 10;
        this->happinessLevel += play;
    }

    void updateHealth(string status){

        this->healthStatus = status; 

    }

    void updateHunger(int feed) {//assuming each time pet is fed it recives +1 feed

        //assuming hunger level is from 1 t0 10 and pet is hungry if it is at level 5
        this->hungerLevel -= feed;
		if (this->hungerLevel > 5) happinessLevel -= 1;
		else happinessLevel += 1;
       
	}

    string getname(){
        return this->name;
    }
    
    
};

class Adopter
{
private:
    string adopterName, adopterMobileNum;
    vector<Pet> adoptedPetRecords;
public:
    Adopter(string name, string num) : adopterName(name), adopterMobileNum(num){}//paratmetrized construtor with list intialization

    void adoptPet(vector<Pet> &pets,string name){
        bool f;
        for (int i = 0; i < pets.size(); ++i)
        {
            if (pets[i].getname() == name)
            {
                this->adoptedPetRecords.push_back(pets[i]);
                pets.erase(pets.begin() + i);//to show pet has been adopted
                f = true;
            }
        }
        if(!f) cout << "Pet name not in the list please recheak" << endl;
    }
    
    void returnpet(vector<Pet> &pets, string name){
        
        bool f;
        for (int i = 0; i < this->adoptedPetRecords.size(); ++i)
        {
            if (this->adoptedPetRecords[i].getname() == name)
            {
                pets.push_back(this->adoptedPetRecords[i]);
                this->adoptedPetRecords.erase(this->adoptedPetRecords.begin() + i);//to show pet has been returned
                f = true;
            }
        }

        if(!f) cout << "Pet name not in your record" << endl;

    }

    void displayAdoptedPets(){
    
        for (Pet p : adoptedPetRecords)
        {
            p.displayPetDetails();
            cout << endl;
        }

    }

    void interact(vector<Pet> &pets, string name){

        int choice;
        cout << "what do you wish to do with " << name << endl;
        cout << "1.play" << endl << "2.feed" << endl;
        cin >> choice;
        if (choice == 1){

            for (int i = 0; i < pets.size(); ++i)
            {
                if (pets[i].getname() == name)
                {
                    pets[i].updateHappiness(1);
                }
            }
        } 

        else if(choice == 2){

            for (int i = 0; i < pets.size(); ++i)
            {
                if (pets[i].getname() == name)
                {
                    pets[i].updateHunger(1);
                }
            }
        } 

    }
};


int main(){

    cout << "Name: Muhammad Ali" << endl << "ID: 23K-0052" << endl;
    //intializing the pets database
    vector<Pet> data = {
        {Pet("sick", "tom", 4, 5, {"jumps", "talks"})},
        {Pet("healthy", "tim", 8, 6, {"talks"})},
        {Pet("sick", "ben", 6, 8, {"No skill"})},
        {Pet("healthy", "jack", 4, 5, {"runs fast"})},
        {Pet("healthy", "milo", 1, 8, {"jumps"})},
        
    };
    Adopter adopter("simon","0316715614");
    int choice;
    while(choice != 6){

        cout << "Welcome to pet shop enter choice" << endl;
        cout << "1.See all pets" << endl;
        cout << "2.Interact with pet" << endl;
        cout << "3.Adopt Pet" << endl;
        cout << "4.Return Pet" << endl;
        cout << "5.Show adpoted pets" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            for(Pet p : data) p.displayPetDetails();
            break;
        }
        case 2:
        {
            string name;
	        cout << "Enter Pet Name You wish to interact with: ";
	        cin.ignore();
	        getline(cin, name);
            adopter.interact(data,name);
            break;
        }
        case 3:
        {
            string n;
            cout << "Enter Pet Name You wish to adopt: ";
	        cin.ignore();
	        getline(cin, n);
            adopter.adoptPet(data,n);
            break;
        }   
        case 4:
        {
            string m;
            cout << "Enter Pet Name You wish to return: ";
	        cin.ignore();
	        getline(cin, m);
            adopter.returnpet(data,m);
            break;

        }

        case 5:
        {
            adopter.displayAdoptedPets();
            break;
        }
        default:
            break;
        }
    }
   


}





