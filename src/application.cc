// Copyright (c) 2013 Your Company. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <iostream>
#include <exception>

#include "application.h"

namespace boilerplate {

Application::Application() {
}

Application::~Application() {
}

void Application::Run() {
  std::cout << "Hello World!" << std::endl;
}

int Application::Main(int argc, const char** argv) {
  Application* application = new Application();

  try {
    application->Run();
  } catch(std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  delete application;

  return 0;
}

} // namespace boilerplate
