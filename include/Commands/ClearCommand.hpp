#pragma once
#include "Commands/Command.hpp"
namespace kichi::commands {class ClearCommand final: public Command {public: CommandResult execute(storage::Storage&,const std::vector<std::string>&) override;};}
