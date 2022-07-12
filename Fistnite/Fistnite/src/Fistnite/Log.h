#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Fistnite 
{
	class FISTNITE_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	};
}

// Core Log macros
#define FN_CORE_TRACE(...)    ::Fistnite::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FN_CORE_INFO(...)     ::Fistnite::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FN_CORE_WARN(...)     ::Fistnite::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FN_CORE_ERROR(...)    ::Fistnite::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FN_CORE_FATAL(...)    ::Fistnite::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log macros
#define FN_TRACE(...)         ::Fistnite::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FN_INFO(...)          ::Fistnite::Log::GetClientLogger()->info(__VA_ARGS__)
#define FN_WARN(...)          ::Fistnite::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FN_ERROR(...)         ::Fistnite::Log::GetClientLogger()->error(__VA_ARGS__)
#define FN_FATAL(...)         ::Fistnite::Log::GetClientLogger()->fatal(__VA_ARGS__)
