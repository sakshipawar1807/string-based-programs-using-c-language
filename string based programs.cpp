//Project:-STRING MANAGEMENT SYSTEM.......


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
#define MAX 50

int Strlen(const char*);

char* Strcpy(char* ,const char* );

char* Strrev(char*);

char* Strcat(char* ,char* );

int Strcmp(char* ,char* );

void Strlwr(char*);

void Strupr(char*);

int Word_Count(char*);

int Character_Count(char*);

int Count_LwrUpr(char*);

void Strncpy(char*,char*,int);

void Palindrome(char*);

void Reverse_EachWord(char*);

int First_OccurChar(char*);

int Last_OccurChar(char*);

void All_OccurChar(char*);

void Freq_EachChar(char*);

void Sort_StrAscending(char*);

void Second_OccurChar(char*);

void Remove_Nofromstr(char*);

char* Strncat(char* ,char* ,int );

int Strncmp(char* ,char*,int );

void Swap_string(char* ,char*);

void Separate_Char(char*);

void Toggle_String(char*);

void Count_Vowel_Cons(char*);

void Reverse_OrderString(char*);

void Remove_LastOccur(char*,char);

void Remove_FirstOccur(char*,char);

void Remove_AllOccur(char*,char);


char str1[SIZE]={'\0'};
char str2[SIZE]={'\0'};

int count=0,no=0,no1=0,no2=0,index1=0,index2=0,index3=0;
char search,ch;

int main()
{
	while(1)
	{
		int choice=0,i=0;
		int ret=0,ret1=0;
		char remove,remove1,remove2,ch;
		
		puts("----------------------------------------------------");
	    puts("************STRING MANAGEMENT STSTEM****************");
	    puts("----------------------------------------------------\n");
	    
	    puts("WELCOME!!!!......To String Management System.........\n");
	    
	    puts("1.  String Length");
     	puts("2.  String Copy");
     	puts("3.  String Reverse");
     	puts("4.  String Concat");
     	puts("5.  String Compare");
     	puts("6.  String in Lowercase");
     	puts("7.  String in Uppercase");
     	puts("8.  String Word Count");
     	puts("9.  String Character Count");
     	puts("10. Count Lower, Upper case ,digits & Symbol");
     	puts("11. String Strncpy");
     	puts("12. String Palindrome");
     	puts("13. Reverse Each Word in String");
     	puts("14. First Occurence of Char in String");
     	puts("15. Last Occurence of Char in String");
     	puts("16. Search All Occurence of Char");
		puts("17. Frequency of Each Character in string");
		puts("18. Sort String in Ascending");
		puts("19. Second Occurence of char in String");
		puts("20. Remove Num From String");
		puts("21. String Strncat");
		puts("22. String Strncmp");
		puts("23. Swapping String");
		puts("24. Separate Individual char in string");
		puts("25. Toggle String");
		puts("26. Count Vowel & Consonant");
		puts("27. Reverse Ordered String");
		puts("28. Remove Last occurence of Char");
		puts("29. Remove First Occurence of Char");
		puts("30. Remove All Occurence of Char");
		puts("50. Exit");
		puts("----------------------------------------------------------");
		
		printf("\nPlease, Enter Choice Which Operation You Perform.....!!\n");
		
     	
     	printf("\nEnter Choice= ");
     	scanf("%d",&choice);
     	
     	switch(choice)
     	{
     		case 1:
     			    int len;
     			    printf("\nEnter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
     			    len=Strlen(str1);
     	       	    printf("Length of String=%d\n",len);
     			    break;
     			   
     		case 2:
     			    printf("Enter Source String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Before Source String=%s\n",str1);
                    printf("Before Dest String=%s\n",str2);
     			    Strcpy(str2,str1);
     			    printf("After Source String=%s\n",str1);
                    printf("After String=%s\n",str2);
     			    break;
     		
     		case 3:
     			    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("String Before Reverse=%s\n",str1);
                    Strrev(str1);
                    printf("String After Reverse=%s\n",str1);
     			    break;
     		
     		case 4:
     			    printf("Enter First String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Enter Second String= ");
                    fflush(stdin);
                    scanf("%[^\n]",str2);
                    printf("Before Concat First String=%s\n",str1);
                    printf("Before Concat Second String=%s\n",str2);
                    Strcat(str2,str1);
                    printf("After Concat First String=%s\n",str1);
                    printf("After Concat Second String=%s\n",str2);
     			    break;
     			   
     		case 5:
     			
     			     printf("Enter First String= ");
     			     fflush(stdin);
                     scanf("%[^\n]",str1);
                     printf("Enter Second String= ");
                     fflush(stdin);
                     scanf("%[^\n]",str2);
                     ret=Strcmp(str1,str2);
                     
                     if(ret==0)
                     {
                     	printf("Both String are Equal\n");
					 }
					 else
					 {
					 	printf("Both String are not Equal\n");
					 }
                     break;
     			   
     		case 6:
     			    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Strlwr(str1);
                    printf("Lower Case=%s\n",str1);
     			    break;
     			   
     		case 7:
     			    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Strupr(str1);
                    printf("Upper Case=%s\n",str1);
     			    break;
     			  
     		
     		case 8:
     			    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Word_Count(str1);
                    printf("Total Word in String=%d\n",count);
     			    break;
     		
     		case 9:
     			   printf("Enter String= ");
     			   fflush(stdin);
                   scanf("%[^\n]",str1);
                   fflush(stdin);
                   printf("Enter Character to Search= ");
                   scanf("%c",&search);
                   ret=Character_Count(str1);
                   printf("%c character present %d times in string\n",search,count);
     			   break;
     			   
     		case 10:
     			   printf("Enter String= ");
     			   fflush(stdin);
                   scanf("%[^\n]",str1);
                   Count_LwrUpr(str1);
     			   break;
     		
     		case 11:
     			    printf("Enter Source String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Before Source String=%s\n",str1);
                    printf("Before Dest String=%s\n",str2);
                    printf("Enter How Many Character Copy= ");
                    scanf("%d",&no);
                    
     			    Strncpy(str2,str1,no);
     			    printf("After Source String=%s\n",str1);
                    printf(" After Dest String=%s\n",str2);
     			    break;
     			    
     		case 12:
     			    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Palindrome(str1);
                    break;
                    
            case 13:
     			    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Reverse_EachWord(str1);
                    break;
                    
            case 14:
            	    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter Character to Search= ");
                    scanf("%c",&search);
            	    index1=First_OccurChar(str1);
            	    if(index1==-1)
            	    {
            	    	printf("%c Not Found\n",search);
					}
					else
					{
						printf("%c is Found at %d index\n",search,index1);
					}
            	    break;
            
            case 15:
            	    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter Character to Search= ");
                    scanf("%c",&search);
            	    index2=Last_OccurChar(str1);
            	    if(index2==-1)
            	    {
            	    	printf("%c Not Found\n",search);
					}
					else
					{
						printf("%c is Found at %d index\n",search,index2);
					}
            	    break;
            
            case 16:
            		printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter Character to Search= ");
                    scanf("%c",&search);
                    All_OccurChar(str1);
                    break;
                    
            case 17:
            	   	printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Freq_EachChar(str1);
                    break;
            
            case 18:
            		printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Before Sorting String: %s\n",str1);
                    Sort_StrAscending(str1);
                    printf("After Sorting String: %s\n",str1);
                    break;
                    
            case 19:
            	    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter Character to Search= ");
                    scanf("%c",&search);
            	    Second_OccurChar(str1);
            	    break;
                    
            case 20:
					printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    Remove_Nofromstr(str1);
                    printf("After Remove Num from String=%s\n",str1);
                    break;
                    
           	case 21:
     			    printf("Enter First String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Enter Second String= ");
                    fflush(stdin);
                    scanf("%[^\n]",str2);
                    printf("Enter How Many Character Concat= ");
                    scanf("%d",&no1);
                    printf("Before Concat First String=%s\n",str1);
                    printf("Before Concat Second String=%s\n",str2);
                    Strncat(str2,str1,no1);
                    printf("After Concat First String=%s\n",str1);
                    printf("After Concat Second String=%s\n",str2);
     			    break;
     			    
     		case 22:
     			    printf("Enter First String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Enter Second String= ");
                    fflush(stdin);
                    scanf("%[^\n]",str2);
                    printf("Enter How Many Character Compare= ");
                    scanf("%d",&no2);
                    ret=Strncmp(str1,str2,no2);
                     
                    if(ret1==0)
                    {
                     	printf("Both String are Equal\n");
				    }
				   else
				   {
					 	printf("Both String are not Equal\n");
				   }
                     break;
                     
            case 23:
     			    printf("Enter First String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Enter Second String= ");
                    fflush(stdin);
                    scanf("%[^\n]",str2);
                    printf("String Before Swapping :\n");
                    printf("First String =%s\n",str1);
                    printf("Second String =%s\n",str2);
                    Swap_string(str1,str2);
                    printf("String After Swapping :\n");
                    printf("First String =%s\n",str1);
                    printf("Second String =%s\n",str2);
                    break;
                    
            case 24:
            	    printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    Separate_Char(str1);
                    break;
                    
            case 25:
            		printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    printf("Before Toggling String: %s\n",str1);
                    Toggle_String(str1);
                    printf("After Toggling String: %s\n",str1);
                    break;
                    
            case 26:
            	   	printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
            	    Count_Vowel_Cons(str1);
            	    break;
            	    
            case 27:
            	   	printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
					printf("Original String=%s\n",str1);   
            	    Reverse_OrderString(str1);
            	    printf("Reverse Ordered words=%s\n",str2);
            	    break;
            	    
            case 28:
            	   	printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter character to remove from String= ");
                    scanf("%c",&remove2);
            	    Remove_LastOccur(str1,remove2);
            	    printf("String After Removing last Character %c=%s\n",remove2,str1);
            	    break;
            	    
            case 29:
            	   	printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter character to remove from String= ");
                    scanf("%c",&remove);
            	    Remove_FirstOccur(str1,remove);
            	    printf("String After Removing First Character %c=%s\n",remove,str1);
            	    break;
            	    
            case 30:
            	   	printf("Enter String= ");
     			    fflush(stdin);
                    scanf("%[^\n]",str1);
                    fflush(stdin);
                    printf("Enter character to remove from String= ");
                    scanf("%c",&remove1);
                    Remove_AllOccur(str1,remove1);
                    printf("String After Removing All Occurence of Character %c=%s\n",remove1,str1);
                    break;
                    
            case 50:
            	   return 0;
            
     		default:
     			   printf("Invalid Input\n");
     	}
	}
  return 0;	
}


int Strlen(const char* str1)
{
	int count=0;
	
	while(*str1!='\0')
	{
		count++;
		str1++;
	}
	return count;
}


char* Strcpy(char* dest,const char* src)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';	
}


char* Strrev(char* str1)
{
	char* start=str1;
	char* end=NULL;
	char temp;
	
	while(*str1!='\0')
	{
		str1++;		
	}
	end=str1-1;
	
	while(start<=end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
}


char* Strcat(char* dest,char* src)
{
	dest=dest+(strlen(dest));
	*dest=' ';
	dest++;
     
    while(*src!='\0')
    {
    	*dest=*src;
    	dest++;
    	src++;
	}	
}


int Strcmp(char* str1,char* str2)
{
	int len1,len2,flag=0;
	len1=strlen(str1);
	len2=strlen(str2);
	
	if(len1!=len2)
	{
		return -1;
	}
	else
	{
		while(*str1!='\0')
		{
			if(*str1==*str2)
			{
				str1++;
			    str2++;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		    return 0;
		else
		    return -1;
	}
}


void Strlwr(char* str1)
{
	while(*str1!='\0')
	{
		if(*str1>='A'&&*str1<='Z')
		{
			*str1=*str1+32;
		}
		str1++;
	}
}


void Strupr(char* str1)
{
	while(*str1!='\0')
	{
		if(*str1>='a'&&*str1<='z')
		{
			*str1=*str1-32;
		}
		str1++;
	}
}


int Word_Count(char* str1)
{
	
	while(*str1!='\0')
	{
		if(*str1== ' ')
		{
			while(*str1== ' ')
			{
				str1++;
			}
		}
		else
		{
			while(*str1!=' '&&*str1!='\0')
			{
				str1++;
			}
			count++;
		}
	}
 return count;
}


int Character_Count(char* str1)
{
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==search)
		{
			count++;
		}
	}
	return count;
}


int Count_LwrUpr(char* str1)
{
 int upper=0,lower=0,digit=0,special=0,i=0;	
 
 for(i=0;str1[i]!='\0';i++)
 {
 	if(str1[i]>='A' && str1[i]<='Z')
 	{
 		upper++;
	}
	else if(str1[i]>='a' && str1[i]<='z')
 	{
 		lower++;
	}
	else if(str1[i]>='0' && str1[i]<='9')
 	{
 		digit++;
	}
	else
	{
		special++;
	}
 }
 
 printf("\nCount of Upper case,Lower case,Digit,Special Symbol Given Below:-\n");
 printf("Upper case Letters:%d\n",upper);
 printf("Lower case Letters:%d\n",lower);
 printf("Digits            :%d\n",digit);
 printf("Special Symbol    :%d\n",special);
 return 0;
}


void Strncpy(char* dest,char* src,int no)
{
	while(no>0 && *src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
		no--;
	}
//	*dest='\0';	
}


void Palindrome(char* str1)
{
	char *ptr,*rev;
	ptr=str1;
	
	while(*ptr!='\0')
	{
		++ptr;
	}
	--ptr;
	
	for(rev=str1;ptr>=rev;)
	{
		if(*ptr==*rev)
		{
			--ptr;
			rev++;
		}
		else
		{
			break;
		}
	}
	if(rev>ptr)
	{
		printf("String is Palindrome\n");
	}
	else
	{
		printf("String is Not Palindrome\n");
	}
}


void Reverse_EachWord(char* str1)
{
	int i=0,j=0;
	
	while(str1[i]!='\0')
	{
		if(str1[i]!=' ')
		{
			str2[j]=str1[i];
			j++;
		}
		else
		{
			str2[j]='\0';
			printf("%s",strrev(str2));
			printf(" ");
			j=0;
		}
		i++;
	}
	str2[j]='\0';
	printf("%s",strrev(str2));
	printf("\n");
}


int First_OccurChar(char* str1)
{
	int i=0;
	
	while(str1[i]!='\0')
	{
		if(str1[i]==search)
		   return i;
		i++;		
	}
	return -1;	
}


int Last_OccurChar(char* str1)
{
	int i=0;
	
	for(i=0;i<=strlen(str1);i++)	
	{
		if(str1[i]==search)
		{
			index2=i;
		}
	}
	return index2;
}


void All_OccurChar(char* str1)
{
	int i=0;
	
	while(str1[i]!='\0')	
	{
		if(str1[i]==search)
		{
			printf("%c is Found at Index %d\n",search,i);
		}
		i++;
	}
	return;
}



void Freq_EachChar(char*)
{
	int i,len=0;
	int freq[26];
	
	len=strlen(str1);
	
	for(i=0;i<26;i++)
	{
		freq[i]=0;
	}
	
	for(i=0;i<len;i++)
	{
		if(str1[i]>='a' && str1[i]<='z')
		{
			freq[str1[i]-97]++;
		}
		else if(str1[i]>='A' && str1[i]<='Z')
		{
			freq[str1[i]-65]++;
		}
	}
	printf("Frequency of All Characters in The Given String: \n");
	for(i=0;i<26;i++)
	{
		if(freq[i]!=0)
		{
			printf("%c = %d\n",(i+97),freq[i]);
		}
	}
	return;
}


void Sort_StrAscending(char* str1)
{
	char temp;
	int i=0,j=0;
	int n=strlen(str1);
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str1[i]>str1[j])
			{
				temp=str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
		}
	}
   return;
}


void Second_OccurChar(char* str1)
{
	int i=0,found=0,count=0;
	
	for(i=0;i<=strlen(str1);i++)
	{
		if(str1[i]==search)
		{
			found=1;
		   	count++;
				
			if(count==2)
			{
				break;
			}
		}
	}
	
	if(count>1)
	{
		printf("%c Found at index %d\n",search,i);
	}
	else
	{
		printf("%c Not Found\n",search);
	}
}


void Remove_Nofromstr(char* str1)
{
	int i=0,len=0;
	
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(str1[i]>='0' && str1[i]<='9')
		{
			str1[i]='\0';
		}
	}
	
	printf("After Removing The Number String: \n");
	for(i=0;i<len;i++)
	{
		printf("%c",str1[i]);
	}
}


char* Strncat(char* dest,char* src,int no1)
{
	dest=dest+(strlen(dest));
	*dest=' ';
	dest++;
     
    while(no1>0 && *src!='\0')
    {
    	*dest=*src;
    	dest++;
    	src++;
    	no1--;
	}	
}


int Strncmp(char* str1,char* str2,int no2)
{
	int len1,len2,flag=0;
	len1=strlen(str1);
	len2=strlen(str2);
	
	if(len1!=len2)
	{
		return -1;
	}
	else
	{
		while(no2>0 &&  *str1!='\0')
		{
			if(*str1==*str2)
			{
				str1++;
			    str2++;
			    no2--;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		    return 0;
		else
		    return -1;
	}
}


void Swap_string(char* ,char*)
{
	char ch;
	int index=0;
	
	while(str1[index]!='\0')
	{
		ch=str1[index];
		str1[index]=str2[index];
		str2[index]=ch;
		index++;
	}
	return;	
}


void Separate_Char(char* str1)
{
	int l=0;
	
	printf("The Characters of the String are: \n");
	while(str1[l]!='\0')
	{
		printf("%c ",str1[l]);
		l++;
	}
	printf("\n");
	return;
}


void Toggle_String(char* str1)
{
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]>='a' && str1[i]<='z')
		{
			str1[i]=str1[i]-32;
		}
		else if(str1[i]>='A' && str1[i]<='Z')
		{
			str1[i]=str1[i]+32;
		}
		i++;
	}
}


void Count_Vowel_Cons(char* str1)
{
	int i=0,vowel=0,consonant=0,len;
	
	len=strlen(str1);
	
	for(i=0;i<len;i++)
	{
		if((str1[i]>='a' && str1[i]<='z') ||(str1[i]>='A' && str1[i]<='Z'))
		{
			if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
			{
				vowel++;
			}
			else
			{
				consonant++;
			}
		}
	}
	printf("Total number of Vowel=%d\n",vowel);
	printf("Total number of Consonant=%d\n",consonant);
	return;
}


void Reverse_OrderString(char* str1)
{
	int i,len,index=0,start,end;
	
	len=strlen(str1);
	
	start=len-1;
	end=len-1;
	
	while(start>0)
	{
		if(str1[start]== ' ')
		{
			i=start+1;
			while(i<=end)
			{
				str2[index]=str1[i];
				i++;
				index++;
			}
			str2[index++]=' ';
			end=start-1;
		}
		start--;
	}
	
	for(i=0;i<=end;i++)
	{
		str2[index]=str1[i];
		index++;
	}
	
	str2[index]='\0';
		
}


void Remove_LastOccur(char* str1,char remove2)
{
	int i,L_Position;
	int len=strlen(str1);
	
	L_Position=-1;
	i=0;
	
	while(i<len)
	{
		if(str1[i]==remove2)
		{
			L_Position=i;
		}
		i++;
	}
	
	if(L_Position!=-1)
	{
		i=L_Position;
		
		while(i<len)
		{
			str1[i]=str1[i+1];
			i++;
		}
	}
	return;
}


 void Remove_FirstOccur(char* str1,char remove)
 {
 	int i=0;
 	int len=strlen(str1);
 	
 	//First occur not found
 	while(i<len && str1[i]!=remove)
 	{
 			i++;
	}	
	
	while(i<len)
	{
		str1[i]=str1[i+1];
		i++;
	}
 }


void Remove_AllOccur(char* str1,char remove1)
{
	int i,j;
	int len=strlen(str1);
	
    for(i=0;i<len;i++)
    {
      if(str1[i]==remove1)
	  {
		for(j=i;j<len;j++)
		{
			str1[j]=str1[j+1];
		}
		len--;
		i--;
	   }
	}
}


































