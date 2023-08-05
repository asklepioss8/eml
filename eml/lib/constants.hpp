

/*
    FLOAT (precision = 6)
    DOUBLE (precision = 15)
    LONG DOUBLE (precision = 17-18)

    If following flags defined

    #define BASICS_FLOAT           --> Includes: BASICS FLOAT 
    #define BASICS_DOUBLE          --> Includes: BASICS DOUBLE
    #define BASICS_LONG_DOUBLE     --> Includes: BASICS LONG DOUBLE
    #define COMPLEX_DOUBLE_1       --> Includes: COMPLEX_DOUBLE_1
    #define COMPLEX_DOUBLE_2       --> Includes: COMPLEX_DOUBLE_2
    #define COMPLEX_DOUBLE_3       --> Includes: COMPLEX_DOUBLE_3
    #define COMPLEX_DOUBLE_4       --> Includes: COMPLEX_DOUBLE_4
    #define COMPLEX_LONG_DOUBLE_1  --> Includes: COMPLEX_LONG_DOUBLE_1
    #define COMPLEX_LONG_DOUBLE_2  --> Includes: COMPLEX_LONG_DOUBLE_2
    #define COMPLEX_LONG_DOUBLE_3  --> Includes: COMPLEX_LONG_DOUBLE_3
    #define COMPLEX_LONG_DOUBLE_4  --> Includes: COMPLEX_LONG_DOUBLE_4

    #define INCLUDE_ALL_CONSTANTS  --> Includes: ALL THE CONTENTS BELOW
    #define INCLUDE_ALL_BASICS     --> Includes: BASICS FLOAT / BASICS DOUBLE / BASICS LONG DOUBLE 
*/

// BASICS FLOAT
#if defined (BASICS_FLOAT) || defined (INCLUDE_ALL_CONSTANTS) || defined (INCLUDE_ALL_BASICS)
const float F_PI           = 3.141593F;
const float F_TAU          = 6.283185F;
const float F_SQRT_2       = 1.414214F;
const float F_SQRT_3       = 1.732051F;
const float F_SQRT_5       = 2.236068F;
const float F_PHI          = 1.618034F;
const float F_SILVER       = 2.414214F;
const float F_CBRT_2       = 1.259921F;
const float F_CBRT_3       = 1.442250F;
const float F_SUPER_GOLDEN = 1.465571F;
const float F_EULER        = 2.718282F;
const float F_LN_2         = 0.693147F;
const float F_EULER_GAMA   = 0.577216F;
#endif

// BASICS DOUBLE
#if defined (BASICS_DOUBLE) || defined (INCLUDE_ALL_CONSTANTS) || defined (INCLUDE_ALL_BASICS)
const double D_PI           = 3.141592653589793;
const double D_TAU          = 6.283185307179586;
const double D_SQRT_2       = 1.414213562373095;
const double D_SQRT_3       = 1.732050807568877;
const double D_SQRT_5       = 2.236067977499790;
const double D_PHI          = 1.618033988749895;
const double D_SILVER       = 2.414213562373095;
const double D_CBRT_2       = 1.259921049894873;
const double D_CBRT_3       = 1.442249570307408;
const double D_SUPER_GOLDEN = 1.465571231876768;
const double D_EULER        = 2.718281828459045;
const double D_LN_2         = 0.693147180559945;
const double D_EULER_GAMA   = 0.577215664901533;
#endif

// BASICS LONG DOUBLE 
#if defined (BASICS_LONG_DOUBLE) || defined (INCLUDE_ALL_CONSTANTS) || defined (INCLUDE_ALL_BASICS)
const long double LD_PI           = 3.14159265358979323846L;
const long double LD_TAU          = 6.28318530717958647692L;
const long double LD_SQRT_2       = 1.41421356237309504880L;
const long double LD_SQRT_3       = 1.73205080756887729352L;
const long double LD_SQRT_5       = 2.23606797749978969640L;
const long double LD_PHI          = 1.61803398874989484820L;
const long double LD_SILVER       = 2.41421356237309504880L;
const long double LD_CBRT_2       = 1.25992104989487316476L;
const long double LD_CBRT_3       = 1.44224957030740838232L;
const long double LD_SUPER_GOLDEN = 1.46557123187676802665L;
const long double LD_EULER        = 2.71828182845904523536L;
const long double LD_LN_2         = 0.69314718055994530941L;
const long double LD_EULER_GAMA   = 0.57721566490153286060L;
#endif



// COMPLEX DOUBLE 1
#if defined (COMPLEX_DOUBLE_1) || defined (INCLUDE_ALL_CONSTANTS)
const double D_CONNECTIVE_CONST         =   1.847759065022574;
const double D_WALLIS                   =   2.094551481542327;
const double D_LEMNISCATE               =   2.622057554292120;
const double D_ERDOS_BORWEIN            =   1.606695152415292;
const double D_OMEGA                    =   0.567143290409784;
const double D_APERY                    =   1.202056903159594;
const double D_LAPLACE_LIMIT            =   0.662743419349182;
const double D_RAMANUJAN_SOLDNER        =   1.451369234883381;
const double D_GAUSS                    =   0.834626841674073;
const double D_HERMITE                  =   1.154700538379256;
const double D_FIRST_CONTINUED_FRACTION =   0.697774657964008;
const double D_GLASISHER_KINKLEIN       =   1.282427129100623;
const double D_CATALAN                  =   0.915965594177219;
const double D_DOTTIE                   =   0.739085133215167;
const double D_MEISSEL_MERTENS          =   0.261497212847643;
const double D_UNIVERSAL_PARABOLIC      =   2.295587149392638;
const double D_CAHEN                    =   0.643410546288338;
const double D_LIOUVILLE                =   0.110001000000000;
#endif

// COMPLEX DOUBLE 2
#if defined (COMPLEX_DOUBLE_2) || defined (INCLUDE_ALL_CONSTANTS)
const double D_GELFOND            = 23.140692632779269;
const double D_GELFOND_SCHNEIDER  =  2.665144142690225;
const double D_FAVARD_SECOND      =  1.233700550136170; 
const double D_GOLDEN_ANGLE       =  2.399963229728653;
const double D_SIERPINSKI         =  2.584981759579253;
const double D_LANDAU_RAMANUJAN   =  0.764223653589221;
const double D_NIELSEN_RAMANUJAN  =  0.822467033424113;
const double D_GIESEKING          =  1.014941606409654;
const double D_BERNSTEIN          =  0.280169499023869;
const double D_TRIBONACCI         =  1.839286755214161;
const double D_BRUN               =  1.902160583104000;
const double D_TWIN_PRIMES        =  0.660161815846870;
const double D_PLASTIC_NUMBER     =  1.324717957244746;
const double D_Z_97_5             =  1.959963984540054;
const double D_PROUHET_THUE_MORSE =  0.412454033640108;
const double D_GOLOMB_DICKMAN     =  0.624329988543551;
const double D_FELLER_TORNIER     =  0.661317049469622;
const double D_CHAMPERNOWNE       =  0.123456789101112;
const double D_SALEM              =  1.176280818259918;
const double D_KHINCHIN           =  2.685452001065306;
#endif

// COMPLEX DOUBLE 3
#if defined (COMPLEX_DOUBLE_3) || defined (INCLUDE_ALL_CONSTANTS)
const double D_LEVY_BETA           = 1.186569110415625;
const double D_LEVY_E_POW_BETA     = 3.275822918721811;
const double D_COPELAND_ERDOS      = 0.235711131719233;
const double D_MILLS               = 1.306377883863081;
const double D_GOMBERTZ            = 0.596347362323194;
const double D_VAN_DER_PAUW        = 4.532360141827194;
const double D_MAGIC_ANGLE         = 0.955316618124509;
const double D_ARTIN               = 0.373955813619202;
const double D_PORTER              = 1.467078079433975;
const double D_LOCHS               = 0.970270114392034;
const double D_DEVICCI_TESERRACT   = 1.007434756884279;
const double D_LIEB_SQUARE_ICE     = 1.539600717839002;
const double D_NIVENS              = 1.705211140105368;
const double D_STEPHENS            = 0.575959968892945;
const double D_RECIPROCAL_FIBNACCI = 3.359885666243178;
const double D_FEIGENBAUM_SIGMA    = 4.669201609102991;
const double D_ROBBINS             = 0.661707182267176;
const double D_WEIERSTRASS         = 0.474949379987921;
const double D_FEIGENBAUM_ALHPA    = 2.502907875095893;
#endif

// COMPLEX DOUBLE 4
#if defined (COMPLEX_DOUBLE_4) || defined (INCLUDE_ALL_CONSTANTS)
const double D_ERDOS_TENENBAUM_FORD   = 0.860713320559342;
const double D_CONWAYS                = 1.303577269034296;
const double D_HAFNER_SARNAK_MCCURLEY = 0.353236371854996;
const double D_BACKHOUSE              = 1.456074948582690;
const double D_KOMORNIK_LORETI        = 1.787231650182966;
const double D_HEATH_BROWN_MOROZ      = 0.001317641154853;
const double D_MRB                    = 0.187859642462067;
const double D_PRIME_CONST            = 0.414682509851112;
const double D_SOMOS_QUAD             = 1.661687949633594;
const double D_FOIAS                  = 1.187452351126501;
const double D_LOGARITHMIC_CAP        = 1.187452351126501; 
const double D_TANIGUCHI              = 0.678234491917392;
const double D_VISWANATH              = 1.131988248794300;
const double D_EMBREE_TREFETHEN       = 0.702580000000000;
#endif


// COMPLEX LONG DOUBLE 1
#if defined (COMPLEX_LONG_DOUBLE_4) || defined (INCLUDE_ALL_CONSTANTS)
const long double LD_CONNECTIVE_CONST         =   1.84775906502257351225L;
const long double LD_WALLIS                   =   2.09455148154232659148L;
const long double LD_LEMNISCATE               =   2.62205755429211981046L;
const long double LD_ERDOS_BORWEIN            =   1.60669515241529176378L;
const long double LD_OMEGA                    =   0.56714329040978387299L;
const long double LD_APERY                    =   1.20205690315959428539L;
const long double LD_LAPLACE_LIMIT            =   0.66274341934918158097L;
const long double LD_RAMANUJAN_SOLDNER        =   1.45136923488338105028L;
const long double LD_GAUSS                    =   0.83462684167407318628L;
const long double LD_HERMITE                  =   1.15470053837925152901L;
const long double LD_FIRST_CONTINUED_FRACTION =   0.69777465796400798201L;
const long double LD_GLASISHER_KINKLEIN       =   1.28242712910062263687L;
const long double LD_CATALAN                  =   0.91596559417721901505L;
const long double LD_DOTTIE                   =   0.73908513321516064165L;
const long double LD_MEISSEL_MERTENS          =   0.26149721284764278375L;
const long double LD_UNIVERSAL_PARABOLIC      =   2.29558714939263807403L;
const long double LD_CAHEN                    =   0.64341054628833802618L;
const long double LD_LIOUVILLE                =   0.11000100000000000000L;
#endif

// COMPLEX LONG DOUBLE 2
#if defined (COMPLEX_LONG_DOUBLE_4) || defined (INCLUDE_ALL_CONSTANTS)
const long double LD_GELFOND            = 23.14069263277926900570L;
const long double LD_GELFOND_SCHNEIDER  =  2.66514414269022518865L;
const long double LD_FAVARD_SECOND      =  1.23370055013616982735L; 
const long double LD_GOLDEN_ANGLE       =  2.39996322972865332223L;
const long double LD_SIERPINSKI         =  2.58498175957925321706L;
const long double LD_LANDAU_RAMANUJAN   =  0.76422365358922066299L;
const long double LD_NIELSEN_RAMANUJAN  =  0.82246703342411321823L;
const long double LD_GIESEKING          =  1.01494160640965362502L;
const long double LD_BERNSTEIN          =  0.28016949902386913303L;
const long double LD_TRIBONACCI         =  1.83928675521416113255L;
const long double LD_BRUN               =  1.90216058310400000000L;
const long double LD_TWIN_PRIMES        =  0.66016181584686957392L;
const long double LD_PLASTIC_NUMBER     =  1.32471795724474602596L;
const long double LD_Z_97_5             =  1.95996398454005423552L;
const long double LD_PROUHET_THUE_MORSE =  0.41245403364010759778L;
const long double LD_GOLOMB_DICKMAN     =  0.62432998854355087099L;
const long double LD_FELLER_TORNIER     =  0.66131704946962233528L;
const long double LD_CHAMPERNOWNE       =  0.12345678910111213141L;
const long double LD_SALEM              =  1.17628081825991750654L;
const long double LD_KHINCHIN           =  2.68545200106530644530L;
#endif

// COMPLEX LONG DOUBLE 3
#if defined (COMPLEX_LONG_DOUBLE_4) || defined (INCLUDE_ALL_CONSTANTS)
const long double LD_LEVY_BETA           = 1.18656911041562545282L;
const long double LD_LEVY_E_POW_BETA     = 3.27582291872181115978L;
const long double LD_COPELAND_ERDOS      = 0.23571113171923293137L;
const long double LD_MILLS               = 1.30637788386308069046L;
const long double LD_GOMBERTZ            = 0.59634736232319407434L;
const long double LD_VAN_DER_PAUW        = 4.53236014182719380962L;
const long double LD_MAGIC_ANGLE         = 0.95531661812450927816L;
const long double LD_ARTIN               = 0.37395581361920228805L;
const long double LD_PORTER              = 1.46707807943397547289L;
const long double LD_LOCHS               = 0.97027011439203392574L;
const long double LD_DEVICCI_TESERRACT   = 1.00743475688427937609L;
const long double LD_LIEB_SQUARE_ICE     = 1.53960071783900203869L;
const long double LD_NIVENS              = 1.70521114010536776428L;
const long double LD_STEPHENS            = 0.57595996889294543964L;
const long double LD_RECIPROCAL_FIBNACCI = 3.35988566624317755317L;
const long double LD_FEIGENBAUM_SIGMA    = 4.66920160910299067185L;
const long double LD_ROBBINS             = 0.66170718226717623515L;
const long double LD_WEIERSTRASS         = 0.47494937998792065033L;
const long double LD_FEIGENBAUM_ALHPA    = 2.50290787509589282228L;
#endif

// COMPLEX LONG DOUBLE 4
#if defined (COMPLEX_LONG_DOUBLE_4) || defined (INCLUDE_ALL_CONSTANTS)
const long double LD_ERDOS_TENENBAUM_FORD   = 0.86071332055934206887L;
const long double LD_CONWAYS                = 1.30357726903429639125L;
const long double LD_HAFNER_SARNAK_MCCURLEY = 0.35323637185499598454L;
const long double LD_BACKHOUSE              = 1.45607494858268967139L;
const long double LD_KOMORNIK_LORETI        = 1.78723165018296593301L;
const long double LD_HEATH_BROWN_MOROZ      = 0.00131764115485317810L;
const long double LD_MRB                    = 0.18785964246206712024L;
const long double LD_PRIME_CONST            = 0.41468250985111166024L;
const long double LD_SOMOS_QUAD             = 1.66168794963359412129L;
const long double LD_FOIAS                  = 1.18745235112650105459L;
const long double LD_LOGARITHMIC_CAP        = 1.18745235112650105459L; 
const long double LD_TANIGUCHI              = 0.67823449191739197803L;
const long double LD_VISWANATH              = 1.13198824879430000000L;
const long double LD_EMBREE_TREFETHEN       = 0.70258000000000000000L;
#endif