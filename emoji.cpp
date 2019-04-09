#include <iostream>
#include <memory>
#include <vector>
#include <cstdlib> 
#include <ctime>
namespace 🔵 = std;
using 🔢 = int;
using 💀 = void;
using 🕖 = time_t;
using 👌 = bool;
#define 👂 auto
#define 🎌 enum
#define 👍 true
#define 👎 false
#define 😈 "evil"
#define 💪 🔵::make_shared
#define 🍸 virtual
#define 🖥️ 🔵::cout
#define 🔫 🔵::endl
template<class 🔮>
using 📚 = 🔵::vector<🔮>;
template<class 🔮>
using 👇 = 🔵::shared_ptr<🔮>;

🎌 🐒 { 🐵, 🙈, 🙉, 🙊 };
🔢 🎲() { return 🔵::rand(); }
👌 😎() { return 👎; }
struct 🍴 { 🍸 💀 👀() = 0; };
struct 🍊 : 🍴 { 🍸 💀 👀() { 🖥️ << "🍊" << 🔫; }; };
struct 🍉 : 🍴 { 🍸 💀 👀() { 🖥️ << "🍉" << 🔫; }; };
struct 🍒 : 🍴 { 🍸 💀 👀() { 🖥️ << "🍉" << 🔫; }; };
struct 🍓 : 🍴 { 🍸 💀 👀() { 🖥️ << "🍓" << 🔫; }; };
struct 🍍 : 🍴 { 🍸 💀 👀() { 🖥️ << "🍍" << 🔫; }; };
struct 🍎 : 🍴 { 🍸 💀 👀() { 🖥️ << "🍎" << 🔫; }; };

🔢 main()
{
    if(😎() == 👎)
        🖥️ << "💩" << 🔫;

    📚<👇<🍴>> 🍛 = { 💪<🍊>(), 💪<🍉>(), 💪<🍒>(), 💪<🍍>(), 💪<🍎>() };

    for (👂 🍏 : 🍛)
        🍏->👀();

    return 🎲();
}
