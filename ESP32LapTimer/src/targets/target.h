#ifdef BOARD_DEFAULT
  #include "config_default.h"
#elif BOARD_OLD
  #include "config_old.h"
#elif BOARD_TTGO_LORA
  #include "config_ttgo_lora_v1.h"
#else 
  #error "Unknown board!"
#endif
