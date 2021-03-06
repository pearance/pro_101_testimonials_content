<?php
/**
 * @file
 * pro_101_testimonials_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_testimonials_content_content_defaults() {
  $content = array();

  $content['testimonial1'] = (object) array(
    'exported_path' => 'testimonials/joe-client',
    'title' => 'Joe Client',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'testimonial',
    'language' => 'und',
    'created' => '1336253376',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'testimonial1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
          'summary' => '',
          'format' => NULL,
          'safe_value' => 'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_city_state' => array(
      'und' => array(
        0 => array(
          'value' => 'Poconos, PA',
          'format' => NULL,
          'safe_value' => 'Poconos, PA',
        ),
      ),
    ),
  );

  $content['testimonial2'] = (object) array(
    'exported_path' => 'testimonials/jane-client',
    'title' => 'Jane Client',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'testimonial',
    'language' => 'und',
    'created' => '1336263832',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'testimonial2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehender.',
          'summary' => '',
          'format' => NULL,
          'safe_value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehender.',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_city_state' => array(
      'und' => array(
        0 => array(
          'value' => 'New York, NY',
          'format' => NULL,
          'safe_value' => 'New York, NY',
        ),
      ),
    ),
    'field_testimonial_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Attorney at Law at Jane & Asscoiates',
          'format' => NULL,
          'safe_value' => 'Attorney at Law at Jane &amp; Asscoiates',
        ),
      ),
    ),
  );

  $content['testimonial3'] = (object) array(
    'exported_path' => 'testimonials/roe-client',
    'title' => 'Roe Client',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'testimonial',
    'language' => 'und',
    'created' => '1336285855',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'testimonial3',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
          'summary' => '',
          'format' => NULL,
          'safe_value' => 'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_city_state' => array(
      'und' => array(
        0 => array(
          'value' => 'Jersey City, NJ',
          'format' => NULL,
          'safe_value' => 'Jersey City, NJ',
        ),
      ),
    ),
  );

  $content['testimonial_masthead'] = (object) array(
    'exported_path' => 'block/testimonial-masthead',
    'title' => 'Testimonial Masthead',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1360381988',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'testimonial_masthead',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="pre-description">
	&nbsp;
</div>

<h2 class="node-title">
	What our clients and associates are saying about us.
</h2>

<div id="post-description">
	&nbsp;
</div>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
