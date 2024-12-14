
// Variable and data types

#include<iostream>
using namespace std;

int i = 5;      // *******  Global Variable  ********// 
void var(){
    int i = 4;  // *******  Local Variable  ********//
    cout << "Local  variable : "<<i << endl;
    cout << "Global variable : "<<::i << endl;
}

int main()
{
    int a = 545;
    char b = 'N';
    float c = 52.4;
    double d = 54.47414725;
    bool e = true;
    bool f = false;
    var();
    return 0;
}

/*
                            Keywords of c++
bool	        class	        for	            private	        signed
char	        struct	        while	        protected	    unsigned
int	            union	        do	            public	        short
float	        virtual	        break	        namespace	    long
double	        this	        continue	    using	        const
void	        friend	        switch	        operator	    volatile
wchar_t	        explicit	    case	        return	        true
if	            new	            default	        static	        false
else	        delete	        goto	        inline	        sizeof
try	            catch	        throw	        extern	        typeid
enum	        nullptr	        constexpr	    decltype	    typename
thread_local	noexcept	    static_assert	operator	    goto
*/