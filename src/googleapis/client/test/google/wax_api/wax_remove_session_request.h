// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.4.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Wax API (wax/v1)
// Generated from:
//   Version: v1
//   Revision: 20130321
// Generated by:
//    Tool: google-apis-code-generator 1.4.1
//     C++: 0.1
#ifndef  GOOGLE_WAX_API_WAX_REMOVE_SESSION_REQUEST_H_
#define  GOOGLE_WAX_API_WAX_REMOVE_SESSION_REQUEST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_wax_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class WaxRemoveSessionRequest : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static WaxRemoveSessionRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit WaxRemoveSessionRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit WaxRemoveSessionRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~WaxRemoveSessionRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_wax_api::WaxRemoveSessionRequest</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_wax_api::WaxRemoveSessionRequest");
  }

  /**
   * Determine if the '<code>sessionId</code>' attribute was set.
   *
   * @return true if the '<code>sessionId</code>' attribute was set.
   */
  bool has_sessionId() const {
    return Storage().isMember("sessionId");
  }

  /**
   * Clears the '<code>sessionId</code>' attribute.
   */
  void clear_sessionId() {
    MutableStorage()->removeMember("sessionId");
  }


  /**
   * Get the value of the '<code>sessionId</code>' attribute.
   */
  const StringPiece get_sessionId() const {
    const Json::Value& v = Storage("sessionId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>sessionId</code>' attribute.
   *
   * The ID corresponding to the session to be removed.
   *
   * @param[in] value The new value.
   */
  void set_sessionId(const StringPiece& value) {
    *MutableStorage("sessionId") = value.data();
  }

 private:
  void operator=(const WaxRemoveSessionRequest&);
};  // WaxRemoveSessionRequest
}  // namespace google_wax_api
#endif  // GOOGLE_WAX_API_WAX_REMOVE_SESSION_REQUEST_H_
