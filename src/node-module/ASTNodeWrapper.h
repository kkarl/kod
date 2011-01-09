#ifndef KOD_NODE_AST_NODE_WRAPPER_H_
#define KOD_NODE_AST_NODE_WRAPPER_H_

#include <node.h>
#include "../ast_node.h"

namespace kod {

class ASTNodeWrapper : public node::ObjectWrap {
 public:
  static v8::Persistent<v8::FunctionTemplate> constructor_template;
  static void Initialize(v8::Handle<v8::Object> target);
  static v8::Handle<v8::Value> New(const v8::Arguments& args);

  ASTNodeWrapper() {
    node_.reset(new ASTNode());
  }

 protected:
  ASTNodePtr node_;
};


};  // namespace kod

#endif  // KOD_NODE_AST_NODE_WRAPPER_H_
