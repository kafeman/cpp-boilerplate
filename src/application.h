// Copyright (c) 2013 Your Company. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BOILERPLATE_APPLICATION_H_
#define BOILERPLATE_APPLICATION_H_

namespace boilerplate {

class Application {
public:
  Application();
  ~Application();

  static int Main(int argc, const char** argv);

  void Run();
};

} // namespace boilerplate

#endif // BOILERPLATE_APPLICATION_H_
