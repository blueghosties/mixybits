#include <iostream>
#include <string>
#include <bits/stdc++.h>

void encrypt();
void decrypt();

void encrypt()
{
    char daFile[20];
    char outfile[25];
    char pw[20];
    
    std::cout << "Enter a file to encrypt...\n";
    scanf("%s", &daFile);

    std::cout << "Enter file output name.\n";
    scanf("%s", &outfile);

    std::cout << "Enter password to encrypt with.\n";
    scanf("%s", &pw);

    char first_str[220] = "openssl enc -aes-256-cbc -pass pass:";
    char second_str[20] = " -p -in ";
    char third_str[100] = " -out ";

    strcat(first_str, pw);
    strcat(first_str, second_str);
    strcat(first_str, daFile);

    strcat(first_str, third_str);
    strcat(first_str, outfile);

    system(first_str);
    std::cout << std::endl;
}

void decrypt()
{
    char daFile[20];
    char outfile[25];
    char pw[20];

    std::cout << "Enter file to decrypt.\n";
    scanf("%s", &daFile);

    std::cout << "Enter file output name.\n";
    scanf("%s", &outfile);

    std::cout << "Enter password to decrypt with.\n";
    scanf("%s", &pw);

    char first_str[200] = "openssl enc -aes-256-cbc -pass pass:"; // concatenate with pw
    char second_str[20] = " -d -in ";
    char third_str[100] = " -out ";
    char full_cmd[150];

    strcat(first_str, pw);
    strcat(first_str, second_str);
    strcat(first_str, daFile);

    strcat(first_str, third_str);
    strcat(first_str, outfile);
    system(first_str);
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    system("clear");
    std::cout << "-----------------------------------------\n";
    std::cout << "|    M I X Y B I T S - 6510ry 5ku115    |\n";
    std::cout << "|           LinuX     stylez            |\n";
    std::cout << "-----------------------------------------\n";
    std::cout << "   Enter e for encrypt, d for decrypt\n";

    char choice;
    scanf("%c", &choice);

    if(choice == 'e' || choice == 'E')
    {
        encrypt();
    }
    else if(choice == 'd' || choice == 'D')
    {
        decrypt();
    }
    else
    {
        std::cout << "No worky...try again." << std::endl;
    }

    std::cout << "Process has finished.\n";
    return 0;
}
