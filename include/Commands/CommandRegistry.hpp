#pragma once
#include "Commands/Command.hpp"
#include <memory>
#include <string>
#include <unordered_map>
namespace kichi::commands {
class CommandRegistry {std::unordered_map<std::string,std::unique_ptr<Command>> commands_;public: CommandRegistry(); Command* getCommand(const std::string&) const;};
}
