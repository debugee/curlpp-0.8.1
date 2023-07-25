#pragma once


#ifdef _DEBUG
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smdd_curlpp.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smdd_curlpp.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smtd_curlpp.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smtd_curlpp.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smd_curlpp.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smd_curlpp.lib")
		#endif
	#else
		#if _MSC_VER == 1800
			#pragma comment(lib, "v12_smt_curlpp.lib")
		#elif _MSC_VER == 1900
			#pragma comment(lib, "v14_smt_curlpp.lib")
		#endif
	#endif
#endif
