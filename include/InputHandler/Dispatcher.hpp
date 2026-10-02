#pragma once
#include "Commands/CommandRegistry.hpp"
#include "InputHandler/ParsedArgument.hpp"
namespace kichi::input {class Dispatcher {commands::CommandRegistry& registry_;public: explicit Dispatcher(commands::CommandRegistry&); commands::CommandResult dispatch(storage::Storage&,const ParsedArgument&) const;};}
