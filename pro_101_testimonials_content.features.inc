<?php
/**
 * @file
 * pro_101_testimonials_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_testimonials_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}