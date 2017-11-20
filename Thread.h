#ifndef THREAD_H
#define THREAD_H

#include <stdint.h>
#ifdef THREAD_PTHREAD_SUPPORTED
	#include <pthread.h>
#endif
#ifdef THREAD_PTHREAD_SUPPORTED
	#include <SDL2/sdl.h>
#endif

#define THREAD_C11_SUPPORT 0x1
#define THREAD_CPP_SUPPORT 0x2
#define THREAD_SDL_SUPPORT 0x4
#define THREAD_PTHEAD_SUPPORT 0x8
#define THREAD_BOOOST_SUPPORT 0x10



class Thread
{
	public:
		Thread();
		static int SupportedLibaries(void);
		static int CurrentLibary(void);
		static ThreadId Create();
		static void Join();
		
};

#endif // THREAD_H
