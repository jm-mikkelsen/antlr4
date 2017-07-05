/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include "antlr4-common.h"

namespace antlr4 {
namespace atn {

  class ANTLR4CPP_PUBLIC ATNDeserializationOptions final {
  private:
    static ATNDeserializationOptions defaultOptions;

    bool verifyATN;
    bool generateRuleBypassTransitions;

  public:
    ATNDeserializationOptions();
    explicit ATNDeserializationOptions(ATNDeserializationOptions *options);

    static const ATNDeserializationOptions& getDefaultOptions();

    bool isVerifyATN();

    void setVerifyATN(bool verify);

    bool isGenerateRuleBypassTransitions();

    void setGenerateRuleBypassTransitions(bool generate);

  private:
    void InitializeInstanceFields();
  };

} // namespace atn
} // namespace antlr4
