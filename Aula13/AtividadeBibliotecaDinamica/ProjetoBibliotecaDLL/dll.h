#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
# define DLLIMPORT __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define DLLIMPORT __declspec (dllimport)
#endif /* Not BUILDING_DLL */


DLLIMPORT void HelloWorld (void);

DLLIMPORT int exercicio1();
DLLIMPORT int exercicio3();
DLLIMPORT int exercicio4();
DLLIMPORT int exercicio5();
DLLIMPORT int exercicio7();


#endif /* _DLL_H_ */
