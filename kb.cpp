#include "cheats.hpp"

namespace CTRPluginFramework
{
  int kbOpen(std::string msg, u64 &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u64 &out, bool IsHex)
  {
    Keyboard kb(msg);
    kb.IsHexadecimal(IsHex);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u32 &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u32 &out, bool IsHex)
  {
    Keyboard kb(msg);
    kb.IsHexadecimal(IsHex);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u16 &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u16 &out, bool IsHex)
  {
    Keyboard kb(msg);
    kb.IsHexadecimal(IsHex);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u8 &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, u8 &out, bool IsHex)
  {
    Keyboard kb(msg);
    kb.IsHexadecimal(IsHex);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, float &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, double &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, std::string &out)
  {
    Keyboard kb(msg);
    int res = kb.Open(out);
    return res;
  }

  int kbOpen(std::string msg, StringVector options, int &out)
  {
    Keyboard kb(msg, options);
    int res = kb.Open();
    if (res < 0) return res;
    out = res;
    return 0;
  }
}
