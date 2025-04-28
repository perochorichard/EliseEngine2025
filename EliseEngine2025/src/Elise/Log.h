#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Elise {
	class ELISE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


// core log macros
#define EL_CORE_TRACE(...) ::Elise::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EL_CORE_INFO(...)  ::Elise::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EL_CORE_WARN(...)  ::Elise::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EL_CORE_ERROR(...) ::Elise::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EL_CORE_FATAL(...) ::Elise::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// client log macros
#define EL_TRACE(...)      ::Elise::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EL_INFO(...)       ::Elise::Log::GetClientLogger()->info(__VA_ARGS__)
#define EL_WARN(...)       ::Elise::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EL_ERROR(...)      ::Elise::Log::GetClientLogger()->error(__VA_ARGS__)
#define EL_FATAL(...)      ::Elise::Log::GetClientLogger()->fatal(__VA_ARGS__)
