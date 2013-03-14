<?php
/**
 * @file
 * pro_101_testimonials_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_testimonials_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testimonials';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'testimonials' => 'testimonials',
        'testimonials/*' => 'testimonials/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-testimonial_masthead' => array(
          'module' => 'nodeblock',
          'delta' => 'testimonial_masthead',
          'region' => 'content',
          'weight' => '-10',
        ),
        'jasm-service_list' => array(
          'module' => 'jasm',
          'delta' => 'service_list',
          'region' => 'main_sidebar_1',
          'weight' => '-10',
        ),
        'jasm-fb_like_box' => array(
          'module' => 'jasm',
          'delta' => 'fb_like_box',
          'region' => 'main_sidebar_1',
          'weight' => '-9',
        ),
        'jasm-twitter_follow_button' => array(
          'module' => 'jasm',
          'delta' => 'twitter_follow_button',
          'region' => 'main_sidebar_1',
          'weight' => '-8',
        ),
        'jasm-feedburner_mail_subscribe' => array(
          'module' => 'jasm',
          'delta' => 'feedburner_mail_subscribe',
          'region' => 'main_sidebar_1',
          'weight' => '-6',
        ),
        'views-specialties-specialties_block' => array(
          'module' => 'views',
          'delta' => 'specialties-specialties_block',
          'region' => 'main_sidebar_1',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['testimonials'] = $context;

  return $export;
}
