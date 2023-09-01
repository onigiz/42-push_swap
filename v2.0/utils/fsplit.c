#include "utils.h"

char **fsplit(const char *str, char c)
{
    char **splitted;
    int start = 0;
    int i = 0;
    int j = 0;

    if (!str)
        return NULL;
    
    int wordCount = wcounter(str, c);
    splitted = (char **)malloc(sizeof(char *) * wordCount);
    if (!splitted)
        return NULL;

    while (str[i])
    {
        //c'ye eşit değilse if'e git, eşitse ilerle
        if (str[i] != c)
        {
            //i güncel değeri start yap, ilerleme durduğundaki i değeri end olacak
            start = i;
            //null olmadığı ve c'ye eşit olmadığın sürece ilerle, end bulacağız
            while (str[i] && str[i] != c)
                i++;
            //kelime başına alan tahsisi
            splitted[j] = fsubstr(str, start, i);
            if (!splitted[j])
                return NULL;
            //kelime atla
            j++;
        }
        else
        {
            i++;
        }
    }
    return (splitted);
}


/* #include "stdio.h"
int main(int ac, char **av)
{
    char *str = " bu sene galatasaray   şampiyon! ";
    char **splitted = fsplit(str, ' ');
    int i = 0;
    
    //Evet, doğru düşünüyorsunuz. splitted aslında bir dizi dizisi (array of pointers) olduğu için, 
    //bellekteki her bir indis splitted[i], bir stringin adresini gösterir. Bu diziyi serbest bıraktığınızda, 
    //yalnızca bu dizi içindeki adresleri (pointerları) serbest bırakmış olursunuz, ancak bu adreslerin işaret 
    ettiği stringler hala bellekte durur.
    while (i < wcounter(str, ' '))
    {
        printf("%s\n", splitted[i]);
        free(splitted[i]); // Serbest bırakılan bellek ONEMLI!!!!!
        i++;
    }
    free(splitted); // Genel dizi belleği serbest bırak
} */