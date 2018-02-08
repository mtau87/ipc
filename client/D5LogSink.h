#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#define GOOGLE_GLOG_DLL_DECL
#include <glog/logging.h>  

class ScopedD5LogSink : public ::google::LogSink {
public:
	ScopedD5LogSink() :will_die_(false)
	{
		::google::AddLogSink(this);
	}
	~ScopedD5LogSink() override
	{
		::google::RemoveLogSink(this);
	} 

	void send(::google::LogSeverity severity, const char* filename,
		const char* base_filename, int line, const struct std::tm* tm_time,
		const char* message, size_t message_len) override
	{
		const std::string message_string = ::google::LogSink::ToString(
			severity, GetBasename(filename), line, tm_time, message, message_len);
		switch (severity) {
		case ::google::GLOG_INFO:
#ifndef QT_NO_DEBUG
			std::cout << message_string << std::endl;
#endif
			break;

		case ::google::GLOG_WARNING:
#ifndef QT_NO_DEBUG
                        std::cout << message_string << std::endl;
#endif
			break;

		case ::google::GLOG_ERROR:
#ifndef QT_NO_DEBUG
                        std::cout << message_string << std::endl;
#endif
			break;

		case ::google::GLOG_FATAL:
#ifndef QT_NO_DEBUG
                        std::cout << message_string << std::endl;
#endif
			will_die_ = true;
			break;
		}
	}

	void WaitTillSent() override
	{
		if (will_die_) {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	}
private:
	const char* GetBasename(const char* filepath) {
		const char* base = std::strrchr(filepath, '/');
		return base ? (base + 1) : filepath;
	}
private:
	bool will_die_;
};
