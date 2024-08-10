    #include<stdio.h> 
    #include<string.h>
    #include<stdlib.h>
    
    

    void GetASCII(char *stringParam, int *intParam, int lenghtParam)    //gets an array of ASCII-code integers from a given string and the lenght of the string
    {
        for (int i = 0; i <= lenghtParam; i++)
        {
            intParam[i] = (int)stringParam[i];   
        }
    }

    void GetText(int *intParam, char *stringParam, int lenghtParam)     //gets a string from an given array of ASCII-code integers and its lenght
    {
        for (int i = 0; i <= lenghtParam; i++)
        {
            stringParam[i] = (char)intParam[i];
        } 
    }

    void CeaserCypher(int *intCleartextParam, int *intCypherParam, int lenghtParam, int keyParam)   //gets an encrypted array of ASCII-code integers from an array of ASCII-code integers, its lenght and a int key
    {
        for (int i =0; i < lenghtParam; i++)
        {
            intCypherParam[i]=intCleartextParam[i]-32+keyParam;
            intCypherParam[i]=intCypherParam[i]%95;
            intCypherParam[i]=intCypherParam[i]+32;
        } 
        intCypherParam[lenghtParam]=0;
    }
    
    void CeaserDecypher(int *intCypherParam, int *intDecypherParam, int lenghtParam, int keyParam)    //gets an unencrypted array of ASCII-code integers from an encrypted array of ASCII-code integers,  its lenght and a int key
    {                                                       
        for (int i = 0; i < lenghtParam; i++)
        {
            intDecypherParam[i]=intCypherParam[i]-32-keyParam;
            intDecypherParam[i]=intDecypherParam[i]%95;
            if(intDecypherParam[i]<0)
            {
                intDecypherParam[i]+=95;
            }
            intDecypherParam[i]+=32;
        } 
        intDecypherParam[lenghtParam]=0;
    }


    void ViginereCypher(int *intCleartextParam, int *intCypherParam, int lenghtParam, int *keyParam, int keyLenghtParam)
    { 
       

        for (int i = 0; i < lenghtParam; i++)
        {
            //printf("%d", sizeof(keyParam)/sizeof(keyParam[0]));
            intCypherParam[i]=intCleartextParam[i]-32+keyParam[i%keyLenghtParam];
            intCypherParam[i]=intCypherParam[i]%95;
            intCypherParam[i]=intCypherParam[i]+32;
            //printf("%d ", intCypherParam[i]);
        } 
        intCypherParam[lenghtParam]=0;

        
    }

    void ViginereDecypher(int *intCypherParam, int *intDecypherParam, int lenghtParam, int *keyParam, int keyLenghtParam)
    {
        for (int i = 0; i < lenghtParam; i++)
            {
                intDecypherParam[i]=intCypherParam[i]-32-keyParam[i%keyLenghtParam];
                intDecypherParam[i]=intDecypherParam[i]%95;
                if(intDecypherParam[i]<0)
                {
                    intDecypherParam[i]+=95;
                }
                intDecypherParam[i]+=32;
                printf("%d ", intDecypherParam[i]);
            } 
            intDecypherParam[lenghtParam]=0;
    }


    



    