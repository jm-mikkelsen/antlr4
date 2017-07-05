/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#include "atn/ATNDeserializationOptions.h"

using namespace antlr4::atn;

ATNDeserializationOptions ATNDeserializationOptions::defaultOptions;

ATNDeserializationOptions::ATNDeserializationOptions() {
  InitializeInstanceFields();
}

ATNDeserializationOptions::ATNDeserializationOptions(ATNDeserializationOptions *options) : ATNDeserializationOptions() {
  this->verifyATN = options->verifyATN;
  this->generateRuleBypassTransitions = options->generateRuleBypassTransitions;
}

const ATNDeserializationOptions& ATNDeserializationOptions::getDefaultOptions() {
  return defaultOptions;
}

bool ATNDeserializationOptions::isVerifyATN() {
  return verifyATN;
}

void ATNDeserializationOptions::setVerifyATN(bool verify) {
  verifyATN = verify;
}

bool ATNDeserializationOptions::isGenerateRuleBypassTransitions() {
  return generateRuleBypassTransitions;
}

void ATNDeserializationOptions::setGenerateRuleBypassTransitions(bool generate) {
  generateRuleBypassTransitions = generate;
}

void ATNDeserializationOptions::InitializeInstanceFields() {
  verifyATN = true;
  generateRuleBypassTransitions = false;
}
