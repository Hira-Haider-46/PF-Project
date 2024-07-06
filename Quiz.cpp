#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void write_f(ofstream& write);
bool compare(char *a, char *b);
bool input(char* id, char* pass); 
char display(); 
void write1();
void write2();
void write3();
bool check_ans(char* f_name, int i, char c, char* b);
void read1();
void read2();
void read3();
char single_input();
void read_cor_ans(char* a_name);
int main() 
{
    ofstream write_d("Student Accounts.txt");
    if (!write_d) 
	{
        cout << "Error\n";
        return 0;
    }
    else 
	{
        write_f(write_d);
        write_d.close();
    }
    write1();
    write2();
    write3();
    char* id = new char[20];	
	char* pass = new char[10];
    bool check = input(id, pass);
    while (!check) 
	{
        check = input(id, pass);
    }
    delete[] id;
    delete[] pass;
    char n;
    if (check) 
	{
        n = display();
    }
    char z;
    do
	{
	    if(n == '1')
	    {
	    	read1();
	    }
	    else if(n == '2')
	    {
	    	read2();
	    }
		else if(n == '3')
		{
			read3();
		}
		cout << "Do you want to continue (y/n): ";
		z = single_input();
		while(z != 'y' && z != 'n')
		{
			cout << "Invalid Enter again: ";
			z = single_input();
		}
		if( z == 'n')
		{
			break;
		}
		n = display();
	}while(z == 'y');
    return 0;
}  
void write_f(ofstream& write) 
{
    write << "Student ID\tPasswords" << endl;
    write << "l1f22bscs0036\tazzfkk" << endl;
	write << "l1f22bscs0014\tsdfghy" << endl;
    write << "l1f22bscs0020\tkhhert" << endl;
    write << "l1f22bscs0017\tyuownj";
    cout << "Valid Details\n";
    cout << "Student ID\tPasswords" << endl;
    cout << "l1f22bscs0036\tazzfkk" << endl;
	cout << "l1f22bscs0014\tsdfghy" << endl;
    cout << "l1f22bscs0020\tkhhert" << endl;
    cout << "l1f22bscs0017\tyuownj" << endl;
}
bool compare(char *a, char *b)
{
	int l1 = strlen(a), l2 = strlen(b);
	if(l1 != l2)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < l1; i++)
		{
			if(b[i] != a[i])
			{
				return false;
			}
		}
		return true;
	}
}
bool input(char* id, char* pass) 
{
    cout << "Enter ID: ";
    cin.getline(id, 20);
    cout << "Enter password: ";
    cin.getline(pass, 10);
    ifstream read("Student Accounts.txt");
    if (!read) 
	{
        cout << "Error\n";
        return false;
    }
    else 
	{
        bool valid = false;
        char waste[50], id1[20], pass1[10];
        read.getline(waste, 50);
        while (!read.eof()) 
        {
            read.getline(id1, 20,'\t');
            read.getline(pass1, 10);
            if (compare(id, id1) && compare(pass, pass1))
            {
                valid = true;
                break;
            }
        }
        read.close();
        if (valid)
        {
        	cout << "Login Successful\n";
            return true;
        }
        else
        {
            cout << "Invalid ID or Password\n";
            return false;
        }
    }
}
char display() 
{
    char n;
    cout << "\n\tOnline Quiz\n\n";
    cout << "Select any Subject" << endl;
    cout << "1) English\t2) Maths\t3) Science\n\n";
    cout << "Enter Serial no.: ";
    n=single_input();
    while (n < '1' || n > '3') 
	{
        cout << "Invalid Enter again: ";
        n=single_input();
    }
    return n;
}
void write1()
{
	ofstream write1("english.txt");
	if(!write1)
	{
		cout << "Error\n";
		return;
	}
	write1 << "Choose correct answer from the following each mcq carry 2 points.\n";
	write1 << "1) appl_\n";
    write1 << "a) e b) r c) s d) w\n";
    write1 << "2) man_o\n";
    write1 << "a) t b) g c) r d) a\n";
    write1 << "3) g_od\n";
    write1 << "a) r b) o c) w d) y\n";
    write1 << "4) bl_e\n";
    write1 << "a) u b) a c) i d) e\n";
    write1 << "5) bl_ck\n";
    write1 << "a) a b) e c) i d) u\n";
    write1 << "6) y_llow\n";
    write1 << "a) e b) o c) i d) a\n";
    write1 << "7) chocolat_\n";
    write1 << "a) o b) a c) e d) i\n";
    write1 << "8) rea_y\n";
    write1 << "a) a b) e c) d d) u\n";
    write1 << "9) gr_en\n";
    write1 << "a) i b) a c) o d) e\n";
    write1 << "10) boo_\n";
    write1 << "a) e b) k c) o d) i";
	write1.close();
	ofstream write1_a("eng_ans.txt");
	if(!write1_a)
	{
		cout << "Error\n";
		return;
	}
	write1_a << "a\nb\nb\na\na\na\nc\nc\nd\nb";
	write1_a.close();
}
void write2()
{
	ofstream write2("math.txt");
	if(!write2)
	{
		cout << "Error\n";
		return;
	}
	write2 << "Choose correct answer from the following each mcq carry 2 points.\n";
	write2 << "1) 1+2\n";
	write2 << "a) 3 b) 5 c) 7 d) 9\n";
	write2 << "2) 6-2\n";
	write2 << "a) 3 b) 4 c) 5 d) 6\n";
	write2 << "3) 4*2\n";
	write2 << "a) 8 b) 10 c) 12 d) 14\n";
	write2 << "4) 12/3\n";
	write2 << "a) 3 b) 4 c) 5 d) 6\n";
	write2 << "5) 10+20-5\n";
	write2 << "a) 25 b) 30 c) 35 d) 40\n";
	write2 << "6) 8*4/2\n";
	write2 << "a) 12 b) 14 c) 16 d) 18\n";
	write2 << "7) 5+10-7+3\n";
	write2 << "a) 11 b) 12 c) 13 d) 15\n";
	write2 << "8) 20-(5*3)+2\n";
	write2 << "a) 9 b) 12 c) 7 d) 19\n";
	write2 << "9) (10-6+4)*2\n";
	write2 << "a) 16 b) 18 c) 20 d) 22\n";
	write2 << "10) (8/2)*3-5\n";
	write2 << "a) 5 b) 7 c) 9 d) 11";
	write2.close();
	ofstream write2_a("math_ans.txt");
	if(!write2_a)
	{
		cout << "Error\n";
		return;
	}
	write2_a << "a\nb\na\nb\na\nc\na\nc\na\nb";
	write2_a.close();
}
void write3()
{
	ofstream write3("science.txt");
	if(!write3)
	{
		cout << "Error\n";
		return;
	}
	write3 << "Choose right answer from the following each mcq carry 2 points.\n";
        write3 << "1) Which gas is necessary for the survival of plants and animals?\n";
	write3 << "a) Oxygen b) Nitrogen c) Hydrogen d) Carbon Dioxide\n";
	write3 << "2) Which gas is used in the photosynthesis process by plants?\n";
	write3 << "a) Oxygen b) Nitrogen c) Hydrogen d) Carbon Dioxide\n";
	write3 << "3) Which gas is the main component of the Earth's atmosphere?\n";
	write3 << "a) Oxygen b) Nitrogen c) Hydrogen d) Carbon Dioxide\n";
	write3 << "4) Which gas is responsible for the greenhouse effect?\n";
	write3 << "a) Oxygen b) Nitrogen c) Hydrogen d) Carbon Dioxide\n";
	write3 << "5) Which gas is responsible for the depletion of the ozone layer?\n";
	write3 << "a) Oxygen b) Nitrogen c) Hydrogen d) Chlorofluorocarbons\n";
	write3 << "6) What is the chemical symbol for water?\n";
	write3 << "a) O b) N c) H d) CO2\n";
	write3 << "7) What is the chemical symbol for oxygen?\n";
	write3 << "a) O b) N c) H d) CO2\n";
	write3 << "8) What is the chemical symbol for nitrogen?\n";
	write3 << "a) O b) N c) H d) CO2\n";
	write3 << "9) What is the chemical symbol for carbon dioxide?\n";
	write3 << "a) O b) N c) H d) CO2\n";
	write3 << "10) What is the chemical symbol for hydrogen?\n";
	write3 << "a) O b) N c) H d) CO2";
	write3.close();
	ofstream write3_a("science_ans.txt");
	if(!write3_a)
	{
		cout << "Error\n";
		return;
	}
	write3_a << "a\nd\nb\nd\nd\nc\na\nb\nd\nc";
	write3_a.close();
}
bool check_ans(char* f_name, int i, char c, char* b)
{
    char ch = '\0';
    ifstream read_a(f_name);
    if (!read_a)
    {
        cout << "Error\n";
        return false;
    }
    int a = 1;
    while (a <= i)
    {
        read_a >> ch;
        if (a == i)
        {
            if (c == ch)
            {
                *b = ch;
                read_a.close();
                return true;
            }
        }
		a++;
        
    }
    *b = ch;
    read_a.close();
    return false;
}
void read1()
{
	ofstream write("eng_cor_ans.txt");
	if(!write)
	{
		cout << "Error\n";
	}
	char a_name[] = "eng_cor_ans.txt";
	char f_name[] = "eng_ans.txt";
	ifstream read1("english.txt");
	if(!read1)
	{
		cout << "Error\n";
		return;
	}
	int cor = 0, wr = 0;
	float avg = 0.0, sum = 0.0;
	char line[100], line2[20], c;
	char b = '\0';
	read1.getline(line,100);
	cout << endl << line << endl << endl;
	int i = 0;
	while(!read1.eof())
	{
		i++;
		read1.getline(line,100);
		cout << line << endl;
		read1.getline(line2,20);
		cout << line2 << endl;
		cout << "\nEnter your choice in small letters (a,b,c,d): ";
		c = single_input();
		while(c != 'a' && c != 'b' && c != 'c' && c != 'd')
		{
			cout << "Invalid Enter again: ";
			c = single_input();
		}
		if(check_ans(f_name,i,c,&b))
		{
			cout << "Correct answer\n";
			sum = sum + 2.0;
			cor++;
		}
		else
		{
			cout << "Wrong answer\n";
			wr++;
			write << i << ") " << b << " ";
		}
	}
	read1.close();
	write.close();
	avg = (sum / 20)*100;
	cout << "\n\tResult\n\nTotal points: " << sum << endl;
	cout << "Total correct answers: " << cor << endl;
	cout << "Total wrong answers: " << wr << endl;
	cout << "Average: " << avg << "%" << endl;
	if(wr > 0)
	{
		cout << "\nCorrect answers of those mcq's which were attempted wrong\n";
		read_cor_ans(a_name);
	}
	cout << "\n\n";
}
void read2()
{
	ofstream write("math_cor_ans.txt");
	if(!write)
	{
		cout << "Error\n";
	}
	char a_name[] = "math_cor_ans.txt";
	char f_name[] = "math_ans.txt";
	ifstream read2("math.txt");
	if(!read2)
	{
		cout << "Error\n";
		return;
	}
	int cor = 0, wr = 0;
	float avg = 0.0, sum = 0.0;
	char line[100], line2[30], c;
	char b = '\0';
	read2.getline(line,100);
	cout << endl << line << endl << endl;
	int i = 0;
	while(!read2.eof())
	{
		i++;
		read2.getline(line,100);
		cout << line << endl;
		read2.getline(line2,30);
		cout << line2 << endl;
		cout << "\nEnter your choice in small letters (a,b,c,d): ";
		c = single_input();
		while(c != 'a' && c != 'b' && c != 'c' && c != 'd')
		{
			cout << "Invalid Enter again: ";
			c = single_input();
		}
		if(check_ans(f_name,i,c,&b))
		{
			cout << "Correct answer\n";
			sum = sum + 2.0;
			cor++;
		}
		else
		{
			cout << "Wrong answer\n";
			wr++;
			write << i << ") " << b << " ";
		}
	}
	read2.close();
	write.close();
	avg = (sum / 20)*100;
	cout << "\n\tResult\n\nTotal points: " << sum << endl;
	cout << "Total correct answers: " << cor << endl;
	cout << "Total wrong answers: " << wr << endl;
	cout << "Average: " << avg << "%" << endl;
	if(wr > 0)
	{
		cout << "\nCorrect answers of those mcq's which were attempted wrong\n";
		read_cor_ans(a_name);
	}
	cout << "\n\n";
}
void read3()
{
	ofstream write("science_cor_ans.txt");
	if(!write)
	{
		cout << "Error\n";
	}
	char a_name[] = "science_cor_ans.txt";
	char f_name[] = "science_ans.txt";
	ifstream read3("science.txt");
	if(!read3)
	{
		cout << "Error\n";
		return;
	}
	int cor = 0, wr = 0;
	float avg = 0.0, sum = 0.0;
	char line[100], line2[100], c;
	char b = '\0';
	read3.getline(line,100);
	cout << endl << line << endl << endl;
	int i = 0;
	while(!read3.eof())
	{
		i++;
		read3.getline(line,100);
		cout << line << endl;
		read3.getline(line2,100);
		cout << line2 << endl;
		cout << "\nEnter your choice in small letters (a,b,c,d): ";
		c = single_input();
		while(c != 'a' && c != 'b' && c != 'c' && c != 'd')
		{
			cout << "Invalid Enter again: ";
			c = single_input();
		}
		if(check_ans(f_name,i,c,&b))
		{
			cout << "Correct answer\n";
			sum = sum + 2.0;
			cor++;
		}
		else
		{
			cout << "Wrong answer\n";
			wr++;
			write << i << ") " << b << " ";
		}
	}
	read3.close();
	write.close();
	avg = (sum / 20)*100;
	cout << "\n\tResult\n\nTotal points: " << sum << endl;
	cout << "Total correct answers: " << cor << endl;
	cout << "Total wrong answers: " << wr << endl;
	cout << "Average: " << avg << "%" << endl;
	if(wr > 0)
	{
		cout << "\nCorrect answers of those mcq's which were attempted wrong\n";
		read_cor_ans(a_name);
	}
	cout << "\n\n";
}
char single_input()
{
	char a[100];
	int count=0;
	while(1)
	{
		count = 0;
		cin.getline(a,100);
		for(int i = 0; a[i]!= '\0'; i++)
		{
			count++;
		}
		if(count <= 1)
		{
			break;
		}
		else
		{
			cout << "Enter single character: ";
		}
	}
	return a[0];
}
void read_cor_ans(char* a_name)
{
	ifstream read(a_name);
	if(!read)
	{
		cout << "Error\n";
	}
	else
	{
		char arr[100];
		read.getline(arr,100);
		cout << arr;
	}
}