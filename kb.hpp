#include "cheats.hpp"
#define HEX true
#define DEC false

/* kb library version 1.0 */

namespace CTRPluginFramework
{
  int kbOpen(std::string msg, u64 &out);
  int kbOpen(std::string msg, u64 &out, bool IsHex);
  int kbOpen(std::string msg, u32 &out);
  int kbOpen(std::string msg, u32 &out, bool IsHex);
  int kbOpen(std::string msg, u16 &out);
  int kbOpen(std::string msg, u16 &out, bool IsHex);
  int kbOpen(std::string msg, u8 &out);
  int kbOpen(std::string msg, u8 &out, bool IsHex);
  int kbOpen(std::string msg, float &out);
  int kbOpen(std::string msg, double &out);
  int kbOpen(std::string msg, std::string &out);
  int kbOpen(std::string msg, StringVector options, int &out);
}
